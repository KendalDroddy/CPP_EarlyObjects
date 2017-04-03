/*********************************************************************
** Author: Kendal Droddy
**
** Date: April 2, 2017
**
** Challenge: Design a Population class that stores a current 
** population, annual number of births, and annual number of deaths 
** for some geographic area. The class should allow these three 
** values to be set in either of two ways: by passing arguments to a 
** three-parameter constructor when a new Population object is created 
** or by calling the set Population, setBirths, and set Deaths class 
** member functions. In either case, if a population figure less than 
** 2 is passed to the class, use a default value of 2. If a birth or 
** death figure less than O is passed in, use a default value of 0.The
** class should also have get Birth Rate and getDeathRate functions 
** that compute and return the birth and death rates. Write a short 
** program that uses the Population class and illustrates its 
** capabilities.
*********************************************************************/
#include <iostream>

class Population
{
private:
  int population;
  int annualBirths;
  int annualDeaths;
public:
  //Constructor
  Population(int pop, int births, int deaths)
  {
    if (pop < 2)
    {
      population = 2;
    }
    else
    {
      population = pop;
    }
    if (births < 0)
    {
      annualBirths = 0;
    }
    else
    {
      annualBirths = births;
    }
    if (deaths < 0)
    {
      annualDeaths = 0;
    }
    else
    {
      annualDeaths = deaths;
    }
  }
  //Set population function
  void setPopulation(int pop)
  {
    if (pop < 2)
    {
      population = 2;
    }
    else
    {
      population = pop;
    }
  }

  //Set births function
  void setBirths(int births)
  {
    if (births < 0)
    {
      annualBirths = 0;
    }
    else
    {
      annualBirths = births;
    }
  }

  //Set deaths function
  void setDeaths(int deaths)
  {
    if (deaths < 0)
    {
      annualDeaths = 0;
    }
    else
    {
      annualDeaths = deaths;
    }
  }

  //Get birth rate function
  double birthRate()
  {
    return static_cast<double>(annualBirths) / population;
  }

  //Get death rate function
  double deathRate()
  {
    return static_cast<double>(annualDeaths) / population;
  }
};

int main()
{
  //Create population object using constructor
  Population pop1(2000, 50, 50);

  //Display birth and death rates
  std::cout << "Birth Rate: " << pop1.birthRate() << std::endl; 
  std::cout << "Death Rate: " << pop1.deathRate() << std::endl;

  //Update member variable values
  pop1.setBirths(100);
  pop1.setDeaths(250);
  pop1.setPopulation(5000);

  //Display new birth and death rates
  std::cout << "Birth Rate: " << pop1.birthRate() << std::endl; 
  std::cout << "Death Rate: " << pop1.deathRate() << std::endl;
}