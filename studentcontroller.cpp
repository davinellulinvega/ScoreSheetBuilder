#include "studentcontroller.h"

//Constructor
StudentController::StudentController(QDomNodeList &students, QDomNode &studentsNode):m_students(students),m_studentsNode(studentsNode)
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

            break;
        }
    }
}

bool StudentController::remove(id);
Student StudentController::query(id);
vector<Student> StudentController::queryAll();

//Static Methods
static bool StudentController::isValidId(id);
