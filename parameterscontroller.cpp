#include "parameterscontroller.h"

//Constructor
ParametersController::ParametersController(QDomNode *parametersNode):m_parametersNode(parametersNode),m_parameters(m_parametersNode->childNodes ())
{
    this->query ();
}

//Methods
bool ParametersController::update(Parameters parameters) {
    //Get the parameter element
    QDomElement parameter(this->m_parametersNode->firstChildElement ("parameter"));

    //Set the attributes
    parameter.setAttribute ("modifs","true");
    parameter.setAttribute ("classroom",parameters.getClassroom ());
    parameter.setAttribute ("period",parameters.getPeriod ());
    return true;
}

Parameters *ParametersController::query() {
    //Get the parameter element
    QDomElement parameters(this->m_parametersNode->firstChildElement ("parameter"));
    //Return the parameters
    if(parameters.attribute ("modifs")=="true") {
        return new Parameters(true,parameters.attribute ("classroom",0).toInt (), parameters.attribute ("period",0).toInt ());
    }
    else{
        return new Parameters(false,parameters.attribute ("classroom",0).toInt (), parameters.attribute ("period",0).toInt ());
    }
}
