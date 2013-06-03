#include "classroom.h"

//Constructor
ClassRoom::ClassRoom(int id, string title):m_id(id),m_title(title)
{
}

//Getter & Setter
//Id
int ClassRoom::getId() {
    //Return the id
    return this->m_id;
}

//Title
string ClassRoom::getTitle() {
    //Return the title
    return this->m_title;
}

void ClassRoom::setTitle (string title) {
    //Check if the title is valid
    if(!title.empty ()) {
        //Set the title
        this->m_title=title;
    }
}

//Students
vector<Student> ClassRoom::getStudents() {
    //Retrun the vector containing the Students
    return *m_students;
}

void ClassRoom::setStudents(vector<Student> *students) {
    //Assign the new students vetor
    this->m_students=students;
}
