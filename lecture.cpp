#include "lecture.h"

//Constructor
Lecture::Lecture(int id, string title):m_id(id),m_title(title)
{
}

//Getter & Setter
//Id
int Lecture::getId() {
    //Return the id
    return this->m_id;
}

//Title
string Lecture::getTitle() {
    //Return the title
    return this->m_title;
}

void Lecture::setTitle(string title) {
    //Check if the new title is valid
    if(!title.empty()) {
        this->m_title=title;
    }
}
