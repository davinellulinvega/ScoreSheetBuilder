#include "classroomcontroller.h"

ClassRoomController::ClassRoomController(QDomNodeList &classrooms, QDomNode &classroomsNode)
{
    //Simply assign the parameters to the attributs
    this->m_classroomsNode=classroomsNode;
    this->m_classrooms=classrooms;
}
