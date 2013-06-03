﻿#include "classroomcontroller.h"
#include "studentcontroller.h"

//Constructor
ClassRoomController::ClassRoomController(QDomNode &classroomsNode):m_classroomsNode(classroomsNode),m_classrooms(m_classroomsNode.childNodes ())
{
}

//Methods
//**********************************************************
//**** The add method just add a node, not the students ****
//**********************************************************
bool ClassRoomController::add(ClassRoom classRoom, QDomElement classroomXml) {
    //Add the id and title attributes
    classroomXml.setAttribute ("id", classRoom.getId ());
    classroomXml.setAttribute ("title",classRoom.getTitle ());
    //Add the element to the node
    this->m_classroomsNode.appendChild (classroomXml);
    //Update the childNodes
    this->m_classrooms=this->m_classroomsNode.childNodes ();
    return true;
}

bool ClassRoomController::update(ClassRoom classRoom) {
    //Get the element in the tree
    for(int i=0; i<this->m_classrooms.length (); i++) {
        if(this->m_classrooms.item (i).toElement ().attribute ("id").toInt ()==classRoom.getId ()) {
            QDomElement updateElem(this->m_classrooms.item (i).toElement ());
            updateElem.setAttribute ("title",classRoom.getTitle ());
        }
    }
    return true;
}

bool ClassRoomController::remove(int id) {
    //Parameters
    QDomNode rmNode;
    //Get the child corresponding to id
    for(int i=0; i<this->m_classrooms.length (); i++) {
        if(this->m_classrooms.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            rmNode=m_classrooms.item (i);
            break;
        }
    }
    //Remove the node from the tree
    this->m_classroomsNode.removeChild (rmNode);
    //Update the node list
    this->m_classrooms=this->m_classroomsNode.childNodes ();
    return true;
}

ClassRoom ClassRoomController::query(int id) {
    //Get the element corresponding to id
    QDomElement classroomXml;
    for(int i=0; i<this->m_classrooms.length (); i++) {
        if(this->m_classrooms.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            classroomXml=this->m_classrooms.item (i).toElement ();
            break;
        }
    }
    //Return a ClassRoom
    return new ClassRoom(classroomXml.attribute ("id",0).toInt (),classroomXml.attribute ("title"));
}

vector<ClassRoom> ClassRoomController::queryAll() {
    //Create a new vector
    vector<ClassRoom> classrooms;
    //Fill in the vector
    for(int i=0; i<this->m_classrooms.length (); i++) {
        classrooms.push_back (new ClassRoom(this->m_classrooms.item (i).toElement ().attribute ("id",0).toInt (), this->m_classrooms.item (i).toElement ().attribute ("title")));
    }
    //Return the vector
    return classrooms;
}

bool ClassRoomController::isValidId(int id) {
    //Verify all the ids
    for(int i=0; i<this->m_classrooms.length (); i++) {
        if(this->m_classrooms.item (i).toElement ().attribute ("id",0).toInt ()==id) {
            return true;
        }
    }
    return false;
}
