#ifndef STUDENT_H
#define STUDENT_H

//Packages
#include <iostream>
#include <vector>
#include <QPair>

//Namespace
using namespace std;

class Student
{
public:
    Student();

private:
    int id;
    string firstName;
    string name;
    vector<QPair<int,int>> results;
    string globalComment;

};

#endif // STUDENT_H
