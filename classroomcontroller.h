#ifndef CLASSROOMCONTROLLER_H
#define CLASSROOMCONTROLLER_H

#include <QtXml>
#include "classroom.h"
#include <vector>

class ClassRoomController
{
public:
    //Constructor
    ClassRoomController(QDomNode &classroomsNode);

    //Methods
    bool add(ClassRoom classRoom, QDomElement classroomXml);
    bool update(ClassRoom classRoom);
    bool remove(int id);
    ClassRoom query(int id);
    vector<ClassRoom> queryAll();
    bool isValidId(int id);

private:
    QDomNodeList m_classrooms;
    QDomNode m_classroomsNode;
};

#endif // CLASSROOMCONTROLLER_H
