#include "classroom.h"

//Constructor
ClassRoom::ClassRoom(int id, QString title):m_id(id),m_title(title)
{
}

ClassRoom::ClassRoom(ClassRoom *classroom):m_id(classroom->getId ()),m_title(classroom->getTitle ()),m_students(classroom->getStudents ())
{
}

//Getter & Setter
//Id
int ClassRoom::getId() {
    //Return the id
    return this->m_id;
}

//Title
QString ClassRoom::getTitle() {
    //Return the title
    return this->m_title;
}

void ClassRoom::setTitle (QString title) {
    //Check if the title is valid
    if(!title.isEmpty ()) {
        //Set the title
        this->m_title=title;
    }
}

//Students
QList<Student> *ClassRoom::getStudents() {
    //Retrun the QList containing the Students
    return m_students;
}

void ClassRoom::setStudents(QList<Student> *students) {
    //Assign the new students vetor
    this->m_students=students;
}
