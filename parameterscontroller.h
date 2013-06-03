#ifndef PARAMETERSCONTROLLER_H
#define PARAMETERSCONTROLLER_H

#include <QtXml>
#include "parameters.h"

class ParametersController
{
public:
    //Constructor
    ParametersController(QDomNode parametersNode);

    //Methods
    bool update(Parameters parameters);
    Parameters query();

private:
    QDomNode m_parametersNode;
    QDomNodeList m_parameters;

#endif // PARAMETERSCONTROLLER_H
