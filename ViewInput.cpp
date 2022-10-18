
#include "ViewInput.h"


namespace SpaceViewInput
{
	ViewInput::ViewInput() 
	{
		this->controllerInput = new ControllerInput();
		this->th = new thread(&ControllerInput::InputData, this->controllerInput);
		
	}
	ViewInput::~ViewInput() 
	{
		this->th->detach();
		delete this->controllerInput;
	}
	ControllerInput* ViewInput::GetControllerInput()
	{	
		return this->controllerInput;
	}
	void ViewInput::UpdateControllerSocket(IController* controllerSocket)
	{

	}
	void ViewInput::UpdateControllerData(IController* controllerData)
	{
		this->controllerInput->AddObserver((IObserver*)controllerData);
	}
}