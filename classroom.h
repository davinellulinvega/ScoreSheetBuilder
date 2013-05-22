#ifndef CLASSROOM_H
#define CLASSROOM_H

//Packages
#include <iostream>
#include <vector>

//Namespace
using namespace std;

class ClassRoom
{
public:
    ClassRoom();

private:
    int id;
    string title;
    vector<Student> students;

signals:

slots:
};

#endif // CLASSROOM_H
