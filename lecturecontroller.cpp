#include "lecturecontroller.h"

//Constructor
LectureController::LectureController(QDomNode *lecturesNode)
{
    m_lecturesNode=lecturesNode;
    m_lectures=m_lecturesNode->childNodes ();
}

//Methods
bool LectureController::add(Lecture lecture, QDomElement lectureElem) {
    //Set the attributes
    lectureElem.setAttribute ("id",lecture.getId ());
    lectureElem.setAttribute ("title", lecture.getTitle ());
    //Add the child to the tree
    this->m_lecturesNode->appendChild (lectureElem);
    //Update the child node list
    this->m_lectures=this->m_lecturesNode->childNodes ();
    return true;
}

bool LectureController::update(Lecture lecture) {
    //Get the element corresponding to the lecture
    for(int i=0; i<this->m_lectures.length (); i++) {
        if(this->m_lectures.item (i).toElement ().attribute ("id",0).toInt ()==lecture.getId ()) {
            //Update the attribute title
            this->m_lectures.item (i).toElement ().setAttribute ("title", lecture.getTitle ());
            return true;
        }
    }
    return false;
}

bool LectureController::remove(int id) {
    //Get the node to remove
    QDomNode rmNode;
    for(int i=0; i<this->m_lectures.length (); i++) {
        if(this->m_lectures.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            rmNode=this->m_lectures.item (i);
            break;
        }
    }
    //Remove the node
    if(!this->m_lecturesNode->removeChild (rmNode).isNull ()) {
        //Update the node list
        this->m_lectures=this->m_lecturesNode->childNodes ();
        return true;
    }
    return false;
}

Lecture *LectureController::query(int id) {
    //Get the element
    for(int i=0; i<this->m_lectures.length (); i++) {
        if(this->m_lectures.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            return new Lecture(this->m_lectures.item (i).toElement ().attribute ("id",0).toInt (),this->m_lectures.item (i).toElement ().attribute ("title"));
        }
    }
    return NULL;
}

QList<Lecture *> LectureController::queryAll() {
    //Create an empty QList
    QList<Lecture *> lectures;
    //Fill in the QList
    for(int i=0; i<this->m_lectures.length (); i++) {
        lectures.push_back (new Lecture(this->m_lectures.item (i).toElement ().attribute ("id",0).toInt (),this->m_lectures.item (i).toElement ().attribute ("title")));
    }
    //Return the QList
    return lectures;
}
