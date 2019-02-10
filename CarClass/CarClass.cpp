// CarClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
#include "Car.h"

using namespace std;


int main()
{
	Car car1;
	car1.display();
	car1.pumpGas(5);
	car1.goFast();
	car1.pumpGas(15);
	car1.pumpGas(5);
	car1.display();

	car1.goFast();
	car1.goFast();
	car1.goFast();
	car1.goFast();

	cout << "You are currently traveling at a rate of " << car1.getSpeed() << "mph" << endl;
	cout << "You currently have " << car1.getTank() << " Gallons of fuel in the car" << endl;
}

