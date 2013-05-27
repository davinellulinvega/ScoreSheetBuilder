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
    //Constructor
    ClassRoom();

    //Getter & Setter
    //Id
    int getId();

    //Title
    string getTitle();
    void setTitle(title);

    //Students
    vector<Student> getStudents();
    void setStudents(vector<Student> *students);

private:
    int m_id;
    string m_title;
    vector<Student> *m_students;

signals:

slots:
};

#endif // CLASSROOM_H
