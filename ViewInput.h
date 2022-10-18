#pragma once
#ifndef _VIEWINPUT_H_
#define _VIEWINPUT_H_

#include "ControllerInput.h"

using namespace SpaceControllerInput;
namespace SpaceViewInput
{
	class ViewInput
	{
	private:
		thread* th;
		ControllerInput* controllerInput;
	public:
		ViewInput();
		~ViewInput();
		ControllerInput* GetControllerInput();
		void UpdateControllerSocket(IController* controllerSocket);
		void UpdateControllerData(IController* controllerData);
	};
}
#endif