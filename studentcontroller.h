#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include "student.h"
#include <vector>

class StudentController
{
public:
    //Constructor
    StudentController();

    //Methods
    bool add(Student student);
    bool update(Student student);
    bool remove(id);
    Student query(id);
    vector<Student> queryAll();

    //Static Methods
    static bool isValidId(id);
};

#endif // STUDENTCONTROLLER_H
