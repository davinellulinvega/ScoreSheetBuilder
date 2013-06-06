#include "parameters.h"
#include "periodcontroller.h"

//Constructor
Parameters::Parameters(bool modifs, int classId, int periodId):m_modifs(modifs),m_classRoom(classId),m_period(periodId)
{
}

Parameters::Parameters(Parameters *params):m_modifs(params->isModified ()),m_classRoom(params->getClassroom ()),m_period(params->getPeriod ())
{

}

//Getter & Setter
//Modifs
bool Parameters::isModified() {
    //Return the modif state
    return this->m_modifs;
}

void Parameters::setModifs(bool state) {
    //Set the new state
    this->m_modifs=state;
}

//Classroom
int Parameters::getClassroom() {
    //Return the classRoom
    return this->m_classRoom;
}

void Parameters::setClassroom(int id) {
    this->m_classRoom=id;
}

//Period
int Parameters::getPeriod() {
    //Return the period
    return this->m_period;
}

void Parameters::setPeriod(int id) {
    this->m_period=id;
}
