#ifndef LECTURECONTROLLER_H
#define LECTURECONTROLLER_H

#include <QtXml>
#include "lecture.h"
#include <vector>

class LectureController
{
public:
    //Constructor
    LectureController(QDomNodeList &lectures);

    //Methods
    bool add(Lecture lecture);
    bool update(Lecture lecture);
    bool remove(id);
    Lecture query(id);
    vector<Lecture> queryAll();

    //Static methods

private:
    QDomNodeList lectures;
};

#endif // LECTURECONTROLLER_H
