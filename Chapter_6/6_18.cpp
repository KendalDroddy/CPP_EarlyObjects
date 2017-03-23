/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 23, 2017
**
** Challenge: Modify Programming Challenge 17 to also consider the 
** effect on population caused by people moving into or out of a 
** geographic area. Given as input a starting population size, the 
** annual birth rate, the annual death rate, the number of individuals 
** that typically move into the area each year, and the number of 
** individuals that typically leave the area each year, the program 
** should project what the population will be numYears from now. 
*********************************************************************/
#include <iostream>
#include <iomanip>

//Function prototype
double projectedPopulation(int, int, int, double, double);

int main()
{
  //Variables
  double birthRate,
         deathRate;
  int    years,
         startPop,
         projPop,
         movingIn,
         movingOut;

  //Get user input
  do
  {
  std::cout << "Enter a starting population of at least 2: ";
  std::cin >> startPop;
  }while(startPop < 2);

  std::cout << "Enter annual birth rate in decimal form: ";
  std::cin >> birthRate;

  std::cout << "Enter annual death rate in decimal form: ";
  std::cin >> deathRate;

  std::cout << "How many individuals move into the area per year: ";
  std::cin >> movingIn;

  std::cout << "How many individuals move out of the area per year: ";
  std::cin >> movingOut;

  do
  {
    std::cout << "Enter number of years to display: ";
    std::cin >> years;  
  }while(years < 1);

  //Result header
  std::cout <<"\n----------------------------------------------------\n"
                "* Year        Starting Pop.        Projected Pop.  *\n"
                "----------------------------------------------------" << std::endl;

  //Calculate and display results for the correct number of years
  for (int i = 1; i <= years; ++i)
  {
    projPop = projectedPopulation(startPop, movingIn, movingOut, birthRate, deathRate);
    std::cout << std::setw(4) << i << std::setw(17) << startPop 
              << std::setw(21) << projPop << std::endl;

    //Update startPop value for each subsequent year
    startPop = projPop;
  }
}

/*********************************************************************
**                        projectedPopulation()
** Accepts three parameters: starting population, birth rate, and death
** rate and returns a projected population. Population values are 
** rounded to nearest whole number.
*********************************************************************/
double projectedPopulation(int sPop, int in, int out, double bRate, double dRate)
{
  return (sPop * (1 + bRate) * (1 + dRate)) + in - out;
}