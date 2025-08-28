#include "KineticEnergyCalculator.h"
#include <iostream>
#include <cmath>

KineticEnergyCalculator::KineticEnergyCalculator(int newMas, int newVolume)
{
	mass = newMas;
	volume = newVolume;
}

void KineticEnergyCalculator::calculate()
{
	float result = (mass * pow(volume,2)) / 2;
}

void KineticEnergyCalculator::print() const
{
	std::cout << "Kinetic Energy Calculator: "
		<< "0.5   * " << mass << " * " << volume << " = " << result;


}
