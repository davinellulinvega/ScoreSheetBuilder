#include "result.h"

//Constructor
Result::Result(int id, int stdId, int lectId, int markId):m_id(id),m_studentId(stdId),m_lectureId(lectId),m_markId(markId)
{
}

Result::Result(Result *result):m_id(result->getId ()),m_studentId(result->getStudentId ()),m_lectureId(result->getLectureId ()),m_markId(result->getMarkId ())
{
}

//Getter and Setter
//Id
int Result::getId () {
    return this->m_id;
}

//Student Id
int Result::getStudentId () {
    return this->m_studentId;
}

void Result::setStudentId (int id) {
    this->m_studentId=id;
}

//Lecture Id
int Result::getLectureId () {
    return this->m_lectureId;
}

void Result::setLectureId (int id) {
    this->m_lectureId=id;
}

//Mark Id
int Result::getMarkId () {
    return this->m_markId;
}

void Result::setMarkId (int id) {
    this->m_markId=id;
}
