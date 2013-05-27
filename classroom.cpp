#include "classroom.h"

//Constructor
ClassRoom::ClassRoom()
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

void ClassRoom::setTitle (title) {
    //Check if the title is valid
    if(title!="" && title!=null) {
        //Set the title
        this->m_title=title;
    }
}

//Students
vector<Student> ClassRoom::getStudents() {
    //Retrun the vector containing the Students
    return this->m_students;
}

void ClassRoom::setStudents(vector<Student> *students) {
    //Assign the new students vetor
    this->m_students=students;
}
