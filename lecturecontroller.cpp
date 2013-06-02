#include "lecturecontroller.h"

LectureController::LectureController(QDomNode &lecturesNode)
{
    //Simply assign the parameters to the attributs
    this->m_lecturesNode=lecturesNode;
    this->m_lectures=this->m_lecturesNode.childNodes ();
}
