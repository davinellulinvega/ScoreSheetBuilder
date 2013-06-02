#ifndef PARAMETERSCONTROLLER_H
#define PARAMETERSCONTROLLER_H

#include <QtXml>
#include "parameters.h"

class ParametersController
{
public:
    //Constructor
    ParametersController();

    //Methods
    bool add(Parameters parameters);
    bool update(Parameters parameters);
    bool remove(Parameters parameters);
    Parameters query();

private:
    QDomNode m_parametersNode;
    QDomNodeList m_parameters
};

#endif // PARAMETERSCONTROLLER_H
