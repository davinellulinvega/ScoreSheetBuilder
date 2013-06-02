#include "student.h"

//Constructor
Student::Student(int id, string fName, string name, string globalCom):m_id(id),m_firstName(fName),m_name(name),m_globalComment(globalCom)
{
}

//Getter & Setter
//Id
int Student::getId() {
    //Return the id
    return this->m_id;
}

void Student::setId (int id) {
    this->m_id=id;
}

//First Name
string Student::getFirstName() {
    //Return first name
    return this->m_firstName;
}

void Student::setFirstName(string firstName) {
    //If firstName is not empty
    if(!firstName.empty()) {
        this->m_firstName=firstName;
    }
}

//Name
string Student::getName() {
    //Return the name
    return this->m_name;
}

void Student::setName(string name) {
    //If the name is not empty
    if(!name.empty()) {
        this->m_name=name;
    }
}

//GlobalComment
string Student::getGlobalComment() {
    //Return global comment
    return this->m_globalComment;
}

void Student::setGlobalComment(string str) {
    //If the comment is not empty
    if(!str.empty()) {
        //Set the global comment
        this->m_globalComment=str;
    }
}
