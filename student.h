#ifndef STUDENT_H
#define STUDENT_H

//Packages
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    //Constructor
    Student(int id, string fName, string name, string globalCom);

    //Getter & Setter
    //Id
    int getId();
    void setId(int id);

    //First Name
    string getFirstName();
    void setFirstName(string firstName);

    //Name
    string getName();
    void setName(string name);

    //GlobalComment
    string getGlobalComment();
    void setGlobalComment(string str);

private:
    int m_id;
    string m_firstName;
    string m_name;
    string m_globalComment;

};

#endif // STUDENT_H
