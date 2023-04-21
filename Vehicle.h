#pragma once
class Vehicle
{
   private:
	   int currentPassengerNumber;
	   double currentSpeed;
	   bool engineStarted;
	   int maxPassengerNumber;
	   double maxSpeed;
   public:
	   bool Accelarate(double);
	   bool Decelerate(double);
	   int getCurrentPassengerNumber();
	   double getCurrentSpeed();
	   bool GetIn(int);
	   bool GetOut(int);
	   bool IsEngineStarted();
	   void StartEngine();
	   void StopEngine();
	   Vehicle(int, double);
	   ~Vehicle();
};

