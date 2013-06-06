#ifndef LECTURECONTROLLER_H
#define LECTURECONTROLLER_H

#include <QtXml>
#include "lecture.h"
#include <QList>

class LectureController
{
public:
    //Constructor
    LectureController(QDomNode &lecturesNode);

    //Methods
    bool add(Lecture lecture, QDomElement lectureElem);
    bool update(Lecture lecture);
    bool remove(int id);
    Lecture query(int id);
    QList<Lecture> queryAll();

    //Static methods

private:
    QDomNodeList m_lectures;
    QDomNode m_lecturesNode;
};

#endif // LECTURECONTROLLER_H
