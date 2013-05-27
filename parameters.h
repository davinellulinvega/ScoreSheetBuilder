#ifndef PARAMETERS_H
#define PARAMETERS_H

//Packages
#include <vector>

class Parameters
{
public:
    //Constructor
    Parameters();

    //Getter & Setter
    //Modifs
    bool isModified();
    void setModifs(state);

    //Classroom
    int getClassroom();
    void setClassroom(id);

    //Period
    int getPeriod();
    void setPeriod(id);

private:
    bool m_modifs;
    int m_classRoom;
    int m_period;
};

#endif // PARAMETERS_H
