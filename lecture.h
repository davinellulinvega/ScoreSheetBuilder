#ifndef LECTURE_H
#define LECTURE_H

//Package
#include <iostream>

//Namespace
using namespace std;

class Lecture
{
public:
    //Constructor
    Lecture(int id, string title);

    //Getter & Setter
    //Id
    int getId();

    //Title
    string getTitle();
    void setTitle(string title);

private:
    int m_id;
    string m_title;
};

#endif // LECTURE_H
