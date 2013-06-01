#include "studentcontroller.h"

StudentController::StudentController(QDomNodeList &students, QDomNode &studentsNode)
{
    //Simply assign the parameters to the attributs
    this->m_studentsNode=studentsNode;
    this->m_students=students;
}
