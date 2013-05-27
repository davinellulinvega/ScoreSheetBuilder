#ifndef PARAMETERSCONTROLLER_H
#define PARAMETERSCONTROLLER_H

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
};

#endif // PARAMETERSCONTROLLER_H
