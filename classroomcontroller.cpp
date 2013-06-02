#include "classroomcontroller.h"

ClassRoomController::ClassRoomController(QDomNode &classroomsNode)
{
    //Simply assign the parameters to the attributs
    this->m_classroomsNode=classroomsNode;
    this->m_classrooms=classrooms;
}
