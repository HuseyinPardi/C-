#include <iostream>
#include <string>

using namespace std;

#include "Vehicle.h"

void TEST_Acceleration(Vehicle& vehicle, double amount)
{
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Accelarate(amount))
	{
		cout << "SUCCESS : Accelerated " << endl;
		cout << "Previous Speed : " << previousSpeed
			<< " Current Speed : " << vehicle.getCurrentSpeed() << endl;
	}
	else
	{
		cout << "FAILURE : Could not accelerated" << endl;
	}
}

void TEST_Deceleration(Vehicle& vehicle, double amount)
{
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Decelerate(amount))
	{
		cout << "SUCCESS : Decelerated " << endl;
		cout << "Previous Speed : " << previousSpeed
			<< " Current Speed : " << vehicle.getCurrentSpeed() << endl;
	}
	else
	{
		cout << "FAILURE : Could not decelerated" << endl;
	}
}

void TEST_GetIn(Vehicle& vehicle, int passengerNumber)
{
	int prevPassenger = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetIn(passengerNumber))
	{
		cout << "SUCCESS : Got-In " << endl;
		cout << "Previous Passenger Number : " << prevPassenger
			<< " Current Passenger Number : " << vehicle.getCurrentPassengerNumber() << endl;
	}
	else
	{
		cout << "FAILURE : Got-In" << endl;
	}

}

void TEST_GetOut(Vehicle& vehicle, int passengerNumber)
{
	int prevPassenger = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetOut(passengerNumber))
	{
		cout << "SUCCESS : Got-Out " << endl;
		cout << "Previous Passenger Number : " << prevPassenger
			<< " Current Passenger Number : " << vehicle.getCurrentPassengerNumber() << endl;
	}
	else
	{
		cout << "FAILURE : Got-Out" << endl;
	}
}

void TEST_StartEngine(Vehicle& vehicle)
{
	vehicle.StartEngine();
}

void TEST_StopEngine(Vehicle& vehicle)
{
	vehicle.StopEngine();
}

int main()
{
	cout << "+-----------------------+" << endl
		<< "| TEST OF FIRST VEHICLE |" << endl
		<< "+-----------------------+" << endl;
	Vehicle vehicle1(4, 220);
	TEST_StartEngine(vehicle1);
	TEST_Acceleration(vehicle1, 30);
	TEST_Deceleration(vehicle1, 20);
	TEST_GetIn(vehicle1, 2);
	TEST_GetOut(vehicle1, 1);
	TEST_StopEngine(vehicle1);
	cout << "+------------------------+" << endl
		<< "| TEST OF SECOND VEHICLE |" << endl
		<< "+------------------------+" << endl;
	Vehicle vehicle2(5, 180);
	TEST_Acceleration(vehicle2, 30);
	TEST_Deceleration(vehicle2, 20);
	TEST_GetIn(vehicle2, 2);
	TEST_GetOut(vehicle2, 1);

	cout << "+------------------------+" << endl
		<< "| TEST OF THIRD VEHICLE |" << endl
		<< "+------------------------+" << endl;
	Vehicle vehicle3(5, 250);
	TEST_StartEngine(vehicle3);
	TEST_Acceleration(vehicle3, 80);
	TEST_Acceleration(vehicle3, 300);
	TEST_Deceleration(vehicle3, 20);
	TEST_Deceleration(vehicle3, 500);
	TEST_GetIn(vehicle3, 2);
	TEST_GetIn(vehicle3, 5);
	TEST_GetOut(vehicle3, 1);
	TEST_StopEngine(vehicle3);
	return 0;
}