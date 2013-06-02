#include "studentcontroller.h"

//Constructor
StudentController::StudentController(QDomNode &studentsNode):m_students(students),m_studentsNode(studentsNode)
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
bool StudentController::add(Student student) {

}

bool StudentController::update(Student student) {
    //Parameters
    int updateId(student.getId ());

    //Get the right node
    for(int i=0; i<this->m_students.length (); i++) {
        //Transform the node into an element
        QDomElement tmpElem(this->m_students.item (i).toElement ());

        //If the id correspond
        if(tmpElem.attributeNode ("id")==updateId) {
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
        if(tmpElem.attributeNode ("id")==id) {
            rmNode=this->m_students.item (i);
            break;
        }
    }

    //Remove the node from the tree
    if(this->m_studentsNode.removeChild (rmNode)) {
        return true;
    }
    else {
        return false;
    }
}

Student StudentController::query(int id);
vector<Student> StudentController::queryAll();

//Static Methods
static bool StudentController::isValidId(id);
