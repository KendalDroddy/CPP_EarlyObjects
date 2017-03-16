/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 15, 2017
**
** Challenge: Write a function named kineticEnergy that accepts an 
** object's mass (in kilograms ) and velocity (in meters per second) 
** as arguments . The function should return the amount of kinetic 
** energy that the object has. Demonstrate the function by calling 
** it in a program that asks the user to enter values for mass and 
** velocity.
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

//FallingDistance prototype
double kineticEnergy(double, double);

int main()
{
	//Variable
	double kEnergy;
	double m, v;
  //Program header
  std::cout <<"\n----------------------------------------\n"
                "*        Kinetic Energy Calculator     *\n"
                "----------------------------------------" << std::endl;

  std::cout << "Enter mass in kilograms: ";
  std::cin >> m;
  std::cout << "Enter velocity in meters per second: ";
  std::cin >> v;

  //Calculate kinetic energy and display result
  kEnergy = kineticEnergy(m, v);
  std::cout << "Kinetic energy is equal to " << kEnergy << " joules." << std::endl;
}

//FallingDistance function definition
double kineticEnergy(double mass, double velocity) 
{
    return  .5 * mass * std::pow(velocity, 2);
}