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
    //Constructor
    Student();

    //Getter & Setter
    //Id
    int getId();

    //First Name
    string getFirstName();
    void setFirstName(firstName);

    //Name
    string getName();
    void setName(newName);

    //Results
    QPair<int,int> getResults();
    int[] GetTabResults();
    void setResults(QPair<int,int> newResults);
    void setTabResults(tabResult);

    //GlobalComment
    string getGlobalComment();
    void setGlobalComment(str);

private:
    int m_id;
    string m_firstName;
    string m_name;
    vector<QPair<int,int>> m_results;
    string m_globalComment;

};

#endif // STUDENT_H
