#include <string>
#pragma once
using namespace std;
class Car
{
public:
	Car();
	void pumpGas(int t);
	void goFast();
	void display();
	int getTank() const;
	int getSpeed() const;

private:
	int speed;
	int tank;
	int maxFuel;
	string model;
};

