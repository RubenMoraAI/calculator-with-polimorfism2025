#pragma once
#include "Calculator.h"
class KineticEnergyCalculator : public Calculator
{
private:
	int mass = 0;
	int volume = 0;
	
public:
	KineticEnergyCalculator(int newMas, int newVolume) ;

	void calculate() override;

	void print()const override;
};

