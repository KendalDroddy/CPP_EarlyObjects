/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 28, 2017
**
** Challenge: Write a function named fallingDistance that accepts an 
** object's falling time (in seconds) as an argument. The function 
** should return the distance, in meters, that the object has fallen 
** during that time interval. Write a program that demonstrates the 
** function by calling it in a loop that passes the values 1 through 
** 10 as arguments and displays the return value. The formula for
** falling distance is: d = .5(g)(t^2).

*********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

//FallingDistance prototype
double fallingDistance(double seconds);

int main()
{
  //Program header
  std::cout <<"\n----------------------------------------\n"
                "*      Falling Distance Calculator     *\n"
                "----------------------------------------" << std::endl;

  for (int i = 0; i <= 10; ++i) //Display conversions for 0-10
  {
      std::cout << "Seconds elapsed: " << std::setw(2) << i << " Meters Fallen: " 
      << std::fixed << std::showpoint << std::setprecision(2) << std::setw(6) 
      << fallingDistance(i) << std::endl;
  }
}

//FallingDistance function definition
double fallingDistance(double seconds) 
{
    return  .5 * 9.8 * std::pow(seconds, 2);
}