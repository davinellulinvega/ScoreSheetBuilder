#include "result.h"

//Constructor
Result::Result()
{
}

//Getter and Setter
//Id
Result::getId () {
    return this->m_id;
}

//Student Id
Result::getStudentId () {
    return this->m_studentId;
}

Result::setStudentId (int id) {
    this->m_studentId=id;
}

//Lecture Id
Result::getLectureId () {
    return this->m_lectureId;
}

Result::setLectureId (int id) {
    this->m_lectureId=id;
}

//Mark Id
Result::getMarkId () {
    return this->m_markId;
}

Result::setMarkId (int id) {
    this->m_markId=id;
}
