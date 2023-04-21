#include "Vehicle.h"
#include<iostream>

using namespace std;

bool Vehicle::Accelarate(double amount)
{
	if (IsEngineStarted())
	{
		if (maxSpeed < currentSpeed + amount)
		{
			currentSpeed = maxSpeed;
		}
		else
		{
			currentSpeed = +amount;

		}
		return true;
	}
	else
	{
		return false;
	}
	
}
bool Vehicle::Decelerate(double amount)
{
	if (IsEngineStarted())
	{
		if (0 > currentSpeed - amount)
		{
			currentSpeed = 0;

		}
		else
		{
			currentSpeed = currentSpeed -amount;

		}
		return true;
	}
	else
	{
		return false;
	}
	
}
int Vehicle::getCurrentPassengerNumber()
{
	return currentPassengerNumber;
}
double Vehicle::getCurrentSpeed()
{
	return currentSpeed;
}
bool Vehicle::GetIn(int passengerNumber)
{
	if (getCurrentSpeed() != 0)
	{
		return false;
	}
	else
	{
		currentPassengerNumber=+passengerNumber;
		return true;
	}

}
bool Vehicle::GetOut(int passengerNumber)
{
	if (getCurrentSpeed() != 0)
	{
		return false;
	}
	else
	{
		currentPassengerNumber = currentPassengerNumber - passengerNumber;
		return true;
	}
}
bool Vehicle::IsEngineStarted()
{
	if (engineStarted)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Vehicle::StartEngine()
{
	cout << "Engine Started" << endl;
	engineStarted = true;
}
void Vehicle::StopEngine()
{
	cout << "Engine Stopped" << endl;
	engineStarted = false;
}

Vehicle::Vehicle(int i,double d):maxPassengerNumber(i),maxSpeed(d){
	currentPassengerNumber = 0;
	currentSpeed = 0;
	engineStarted = 0;
}
Vehicle::~Vehicle(){}