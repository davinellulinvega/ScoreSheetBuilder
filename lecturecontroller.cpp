#include "lecturecontroller.h"

LectureController::LectureController(QDomNodeList &lectures, QDomNode &lecturesNode)
{
    //Simply assign the parameters to the attributs
    this->m_lecturesNode=lecturesNode;
    this->m_lectures=lectures;
}
