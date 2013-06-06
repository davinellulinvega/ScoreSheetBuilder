#include "lecture.h"

//Constructor
Lecture::Lecture(int id, QString title):m_id(id),m_title(title)
{
}

//Getter & Setter
//Id
int Lecture::getId() {
    //Return the id
    return this->m_id;
}

//Title
QString Lecture::getTitle() {
    //Return the title
    return this->m_title;
}

void Lecture::setTitle(QString title) {
    //Check if the new title is valid
    if(!title.isEmpty ()) {
        this->m_title=title;
    }
}
