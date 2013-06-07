#include <QtGui>
#include <QApplication>
#include <iostream>

//Controllers
#include "xmlcontroller.h"
#include "parameterscontroller.h"
#include "classroomcontroller.h"
#include "lecturecontroller.h"
#include "periodcontroller.h"
#include "resultcontroller.h"
#include "scorecontroller.h"
#include "studentcontroller.h"

//Models
#include "parameters.h"
#include "classroom.h"
#include "lecture.h"
#include "period.h"
#include "result.h"
#include "score.h"
#include "student.h"

using namespace std;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //************************
    //Test Xml fonctionalities
    //************************
    //Open the xml document
    Xmlcontroller xmlDoc(0);

    //Get the parameters
    ParametersController paramsControl(xmlDoc.getParametersNode ());
    Parameters params(paramsControl.query ());

    //Get the classroom
    ClassRoomController classControl(xmlDoc.getClassroomsNode ());
    ClassRoom classroom(classControl.query (params.getClassroom ()));

    //Get the period
    PeriodController periodControl(xmlDoc.getPeriodsNode (classroom.getId ()));
    Period period(periodControl.query (params.getPeriod ()));
    cout << "Getting lecture" << endl;
    //Get the lecture
    LectureController lectureControl(xmlDoc.getLecturesNode (classroom.getId (),period.getId ()));
    Lecture lecture(lectureControl.query (0));
    cout << "Getting student" << endl;
    //Get the student
    StudentController studentControl(xmlDoc.getStudentsNode (classroom.getId ()));
    Student student(studentControl.query (0));
    cout << "Getting score" << endl;
    //Get the score
    ScoreController scoreControl(xmlDoc.getScoresNode ());
    Score score(scoreControl.query (0));
    cout << "Getting result" << endl;
    //Get the results
    ResultController resultControl(xmlDoc.getResultsNode (classroom.getId (),period.getId ()));
    Result result(resultControl.query (0));
    cout << "Everything's done" << endl;
//    return a.exec();
    return 0;
}
