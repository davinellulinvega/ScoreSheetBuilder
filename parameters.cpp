#include "parameters.h"
#include "classroomcontroller.h"
#include "periodcontroller.h"

//Constructor
Parameters::Parameters()
{
}

//Getter & Setter
//Modifs
bool Parameters::isModified() {
    //Return the modif state
    return this->m_modifs;
}

void Parameters::setModifs(state) {
    //Set the new state
    this->m_modifs=state;
}

//Classroom
int Parameters::getClassroom() {
    //Return the classRoom
    return this->m_classRoom;
}

void Parameters::setClassroom(id) {
    //If the id is part of the available ids
    if(ClassRoomController::isValidId(id)) {
        this->m_classRoom=id;
    }
}

//Period
int Parameters::getPeriod() {
    //Return the period
    return this->m_period;
}

void Parameters::setPeriod(id) {
    //If the period id is valid
    if(PeriodController::isValidId(id)) {
        this->m_period=id;
    }
}
