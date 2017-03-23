/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 23, 2017
**
** Challenge: In a population, the birth rate is the percentage increase 
** of the population due to births and the death rate is the percentage 
** decrease of the population due to deaths. Write a program that asks 
** for the following:
**    • The starting size of a population(minimum 2)
**    • The annual birth rate
**    • The annual death rate
**    • The number of years to display(minimum 1)
** The program should then display the starting population and the 
** projected population at the end of each year. It should use a 
** function that calculates and returns the projected new size of the 
** population after a year. The formula is N = P(1 + B)(1 - D)
** where N is the new population size, P is the previous population 
** size, B is the birth rate, and D is the death rate.
*********************************************************************/
#include <iostream>
#include <iomanip>

//Function prototype
double projectedPopulation(int, double, double);

int main()
{
  //Variables
  double birthRate,
         deathRate;
  int    years,
         startPop,
         projPop;

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
    projPop = projectedPopulation(startPop, birthRate, deathRate);
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
double projectedPopulation(int sPop, double bRate, double dRate)
{
  return sPop * (1 + bRate) * (1 + dRate);
}