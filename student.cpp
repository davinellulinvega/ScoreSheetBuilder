#include "student.h"

using namespace std;

//Constructor
Student::Student(int id, QString fName, QString name, QString globalCom):m_id(id),m_firstName(fName),m_name(name),m_globalComment(globalCom)
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
QString Student::getFirstName() {
    //Return first name
    return this->m_firstName;
}

void Student::setFirstName(QString firstName) {
    //If firstName is not empty
    if(!firstName.isEmpty ()) {
        this->m_firstName=firstName;
    }
}

//Name
QString Student::getName() {
    //Return the name
    return this->m_name;
}

void Student::setName(QString name) {
    //If the name is not empty
    if(!name.isEmpty ()) {
        this->m_name=name;
    }
}

//GlobalComment
QString Student::getGlobalComment() {
    //Return global comment
    return this->m_globalComment;
}

void Student::setGlobalComment(QString str) {
    //If the comment is not empty
    if(!str.isEmpty ()) {
        //Set the global comment
        this->m_globalComment=str;
    }
}
