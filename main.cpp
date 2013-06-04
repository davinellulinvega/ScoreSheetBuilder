#include <QtGui>
#include <QApplication>
//#include <iostream>

//Controllers
#include "xmlcontroller.h"
#include "parameterscontroller.h"

//Models
#include "parameters.h"

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
    return 0;
}
