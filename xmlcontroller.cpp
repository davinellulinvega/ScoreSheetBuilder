#include "xmlcontroller.h"

//Constructor
Xmlcontroller::Xmlcontroller(QWidget *parent) :
    QWidget(parent)
{
    //Create a dom document
    this->document=new QDomDocument("database");

    //Try to open the xml document in read-only
    QFile xmlDoc("database.xml");

    if(!xmlDoc.open (QIODevice::ReadOnly)) {
        QMessageBox::warning (this,"Error: Opening database","The program couldn't open the database. Maybe the file doesn't exist.");
        return;
    }

    //Set the content of the Dom document
    if(!this->document->setContent (&xmlDoc)) {
        xmlDoc.close ();
        QMessageBox::warning (this,"Error: Opening database","The program couldn't associate the database with the DOM Object.");
        return;
    }

    //Now the document contains the Xml's content we can close the xml doc
    xmlDoc.close ();

    //Get the first child -> root
    this->domElement=this->document->documentElement ();
    this->root=this->domElement.firstChild ();
}

//Getter
//Classroom
QDomNode Xmlcontroller::getClassroomsNode () {
    //Get the child nodes
    QDomNodeList childNodes(this->root.childNodes ());

    //Find the node with the right tag name
    for(int i=0; i<childNodes.length (); i++){
        if(childNodes.item (i).nodeName ()=="classes") {
            return childNodes.item (i);
        }
    }
    return NULL;
}

//Lecture
QDomNode Xmlcontroller::getLecturesNode (int classId, int periodId) {
    //Get the periods
    QDomNode periodsNode(this->getPeriodsNode (classId));
    QDomNodeList periods(periodsNode.childNodes ());
    QDomNodeList childNodes;

    //Get the childNodes of the period corresponding to periodId
    for(int i=0; i<periods.length (); i++) {
        if(periods.item (i).toElement ().attributeNode ("id")==periodId) {
            childNodes=periods.item (i).childNodes ();
            break;
        }
    }

    //Get the lectures node
    for(int i=0; i<childNodes.length (); i++) {
        if(childNodes.item (i).nodeName ()=="lectures") {
            return childNodes.item (i);
        }
    }
    return NULL;
}

//Period
QDomNode Xmlcontroller::getPeriodsNode (int classId) {
    //Get the classrooms
    QDomNode classroomsNode(this->getClassroomsNode ());
    QDomNodeList classrooms(classroomsNode.childNodes ());
    QDomNodeList childNodes;

    //Get the childNodes of the classroom corresponding to id
    for(int i=0; i<classrooms.length (); i++){
        //If the ids are equals
        if(classrooms.item (i).toElement ().attributeNode ("id")==classId) {
            childNodes=classrooms.item (i).childNodes ();
            break;
        }
    }

    //Get the childNode periods
    for(int i=0; i<childNodes.length (); i++) {
        if(childNodes.item (i).nodeName ()=="periods") {
            return childNodes.item (i);
        }
    }
    return NULL;
}

//Score
QDomNode Xmlcontroller::getScoresNode () {
    //Get the child nodes
    QDomNodeList childNodes(this->root.childNodes ());

    //Find the node with the right tag name
    for(int i=0; i<childNodes.length (); i++){
        if(childNodes.item (i).nodeName ()=="scores") {
            return childNodes.item (i);
        }
    }
    return NULL;
}

//Student
QDomNode Xmlcontroller::getStudentsNode (int classId) {
    //Get the classrooms
    QDomNode classroomsNode(this->getClassroomsNode ());
    QDomNodeList classrooms(classroomsNode.childNodes ());
    QDomNodeList childNodes;

    //Get the childNodes of the classroom corresponding to id
    for(int i=0; i<classrooms.length (); i++){
        //If the ids are equals
        if(classrooms.item (i).toElement ().attributeNode ("id")==classId) {
            childNodes=classrooms.item (i).childNodes ();
            break;
        }
    }

    //Get the childNode students
    for(int i=0; i<childNodes.length (); i++) {
        if(childNodes.item (i).nodeName ()=="students") {
            return childNodes.item (i);
        }
    }
    return NULL;
}

//Result
QDomNode Xmlcontroller::getResultsNode (int classId, int periodId) {
    //Get the periodsNode
    QDomNode periodsNode(this->getPeriodsNode (classId));
    QDomNodeList periods(periodsNode.childNodes ());
    QDomNodeList childNodes;

    //Get the child nodes of the period corresponding to periodId
    for(int i=0; i<periods.length (); i++) {
        if(periods.item (i).toElement ().attributeNode ("id")==periodId) {
            childNodes=periods.item (i).childNodes ();
            break;
        }
    }

    //Get the results node
    for(int i=0; i<childNodes.length (); i++) {
        if(childNodes.item (i).nodeName ()=="results"){
            return childNodes.item (i);
        }
    }
    return NULL;
}

//Parameters
QDomNode Xmlcontroller::getParametersNode() {
    //Get the child nodes
    QDomNodeList childNodes(this->root.childNodes ());

    //Find the node with the right tag name
    for(int i=0; i<childNodes.length (); i++){
        if(childNodes.item (i).nodeName ()=="parameters") {
            return childNodes.item (i);
        }
    }
    return NULL;
}

//Methods
bool Xmlcontroller::save () {
    //Open the file
    QFile database("database.xml");
    if(!database.open (QIODevice::WriteOnly)){
        QMessageBox::warning (this,"Error opening database", "Cannot open the database. Does the file exist?");
        return false;
    }

    //Open the text stream
    QTextStream textStream(&database);
    textStream << this->document->toString ();

    return true;
}

QDomElement Xmlcontroller::createElement (QString elemName) {
    return this->document->createElement (elemName);
}
