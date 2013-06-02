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
        QDomNode tmpNode(childNodes.item (i));
        if(tmpNode.nodeName ()=="classes") {
            return tmpNode;
        }
    }
}

//Lecture
QDomNode getLecturesNode (int classId, int periodId) {

}

//Period
QDomNode getPeriodsNode (int classId);

//Score
QDomNode getScoresNode ();

//Student
QDomNode getStudentsNode (int classId);

//Result
QDomNode getResultsNode (int classId, int periodId);
