#ifndef CLASSROOM_H
#define CLASSROOM_H

//Packages
#include <iostream>
#include <vector>
#include "student.h"

//Namespace
using namespace std;

class ClassRoom
{
public:
    //Constructor
    ClassRoom();

    //Getter & Setter
    //Id
    int getId();

    //Title
    string getTitle();
    void setTitle(string title);

    //Students
    vector<Student> getStudents();
    void setStudents(vector<Student> *students);

private:
    int m_id;
    string m_title;
    vector<Student> *m_students;
};

#endif // CLASSROOM_H
