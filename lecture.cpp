#include "lecture.h"

//Constructor
Lecture::Lecture()
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

void Lecture::setTitle(title) {
    //Check if the new title is valid
    if(!title.empty()) {
        this->m_title=title;
    }
}
