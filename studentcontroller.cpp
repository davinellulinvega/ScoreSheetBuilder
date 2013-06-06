#include "studentcontroller.h"

//Constructor
StudentController::StudentController(QDomNode &studentsNode):m_studentsNode(studentsNode),m_students(m_studentsNode.childNodes ())
{
}

//Getters
QDomNodeList StudentController::getStudents() {
    return this->m_students;
}

QDomNode StudentController::getStudentsNode () {
    return this->m_studentsNode;
}

//Methods
bool StudentController::add(Student student, QDomElement studentElem) {
    //Set the attributes
    studentElem.setAttribute ("id",student.getId ());
    studentElem.setAttribute ("fName",student.getFirstName ());
    studentElem.setAttribute ("name",student.getName ());
    studentElem.setAttribute ("globalComment",student.getGlobalComment ());

    //Append the child to the node
    this->m_studentsNode.appendChild (studentElem);

    //Update the node liste
    this->m_students=this->m_studentsNode.childNodes ();
    return true;
}

bool StudentController::update(Student student) {
    //Parameters
    int updateId(student.getId ());

    //Get the right node
    for(int i=0; i<this->m_students.length (); i++) {
        //Transform the node into an element
        QDomElement tmpElem(this->m_students.item (i).toElement ());

        //If the id correspond
        if(tmpElem.attribute ("id",0).toInt ()==updateId) {
            //Update the attributes
            tmpElem.setAttribute ("fName",student.getFirstName ());
            tmpElem.setAttribute ("name",student.getName ());
            tmpElem.setAttribute ("globalComment",student.getGlobalComment ());
            return true;
        }
    }
    return false;
}

bool StudentController::remove(int id) {
    //Parameters
    QDomNode rmNode;

    //Get the node to be removed
    for(int i=0; i<this->m_students.length (); i++) {
        QDomElement tmpElem(this->m_students.item (i).toElement ());
        if(tmpElem.attribute ("id",0).toInt ()==id) {
            rmNode=this->m_students.item (i);
            break;
        }
    }

    //Remove the node from the tree
    if(!this->m_studentsNode.removeChild (rmNode).isNull ()) {
        //Update the node list
        this->m_students=this->m_studentsNode.childNodes ();
        return true;
    }
    else {
        return false;
    }
}

Student *StudentController::query(int id) {
    //Get the studentXml corresponding to id
    for(int i=0; i<this->m_students.length (); i++) {
        if(this->m_students.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            QDomElement studentXml=this->m_students.item (i).toElement ();
            return new Student(studentXml.attribute ("id",0).toInt (),studentXml.attribute ("fName"),studentXml.attribute ("name"),studentXml.attribute ("globalComment"));
        }
    }
    return NULL;
}

QList<Student *> StudentController::queryAll() {
    //Create a new QList
    QList<Student *> students;

    //Fill in the QList
    for(int i=0; i<this->m_students.length (); i++) {
        //Get the studentXml
        QDomElement tmpStudentXml(this->m_students.item (i).toElement ());

        //Append at the end of the QList
        students.push_back (new Student(tmpStudentXml.attribute ("id",0).toInt (),tmpStudentXml.attribute ("fName"),tmpStudentXml.attribute ("name"),tmpStudentXml.attribute ("globalComment")));
    }
    //Return the QList
    return students;
}

bool StudentController::isValidId(int id) {
    //Check for every student
    for(int i=0; i<this->m_students.length (); i++) {
        if(this->m_students.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            return true;
        }
    }
    return false;
}
