#ifndef CLASSROOMCONTROLLER_H
#define CLASSROOMCONTROLLER_H

#include <QtXml>
#include "classroom.h"
#include <vector>

class ClassRoomController
{
public:
    //Constructor
    ClassRoomController(QDomNodeList classrooms);

    //Methods
    bool add(ClassRoom classRoom);
    bool update(ClassRoom classRoom);
    bool remove(id);
    ClassRoom query(id);
    vector<ClassRoom> queryAll();

    //Static Methods
    static bool isValidId(id);

private:
    QDomNodeList classroomes;
};

#endif // CLASSROOMCONTROLLER_H
