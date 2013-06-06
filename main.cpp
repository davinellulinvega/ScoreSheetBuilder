#include <QtGui>
#include <QApplication>
#include <iostream>

//Controllers
#include "xmlcontroller.h"
#include "parameterscontroller.h"

//Models
#include "parameters.h"

using namespace std;

int main(int argc, char *argv[]) {
 //   QApplication a(argc, argv);
    //************************
    //Test Xml fonctionalities
    //************************
    //Open the xml document
    Xmlcontroller xmlDoc(0);
    //Get the parameters
    ParametersController paramsControl(xmlDoc.getParametersNode ());
    Parameters params(paramsControl.query ());
  //  return a.exec();

    cout << "Classroom: " << params.getClassroom () << ", Period: " << params.getPeriod () << endl;
    return 0;
}
