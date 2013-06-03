#ifndef PARAMETERS_H
#define PARAMETERS_H

//Packages
#include <vector>


class Parameters
{
public:
    //Constructor
    Parameters(bool modifs, int classId, int periodId);

    //Getter & Setter
    //Modifs
    bool isModified();
    void setModifs(bool state);

    //Classroom
    int getClassroom();
    void setClassroom(int id);

    //Period
    int getPeriod();
    void setPeriod(int id);

private:
    bool m_modifs;
    int m_classRoom;
    int m_period;
};

#endif // PARAMETERS_H
