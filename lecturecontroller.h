#ifndef LECTURECONTROLLER_H
#define LECTURECONTROLLER_H

#include "lecture.h"
#include <vector>

class LectureController
{
public:
    //Constructor
    LectureController();

    //Methods
    bool add(Lecture lecture);
    bool update(Lecture lecture);
    bool remove(id);
    Lecture query(id);
    vector<Lecture> queryAll();

    //Static methods
};

#endif // LECTURECONTROLLER_H
