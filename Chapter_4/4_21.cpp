/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: The following table lists the freezing and boiling 
** points of several substances. Write a program that asks the user 
** to enter a temperature, and then shows all the substances that 
** will freeze at that temperature and all that will boil at that 
** temperature. For example, if the user enters -20, the program 
** should report that water will freeze and oxygen will boil at 
** that temperature.
**            Substance    Freezing Point    Boiling Point
**            Ethyl Alcohol    -173              172
**            Mercury          -38               676
**            Oxygen           -362             -306
**            Water             32               212
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
  int temp,
      freeze = 0,
      boil = 0;

  //Get user input
  std::cout << "Enter temperature: ";
  std::cin >> temp;

  //Initialize variables to use in freeze switch
  if (temp <= -362)
  {
    freeze = 4;
  }
  else if (temp <= -173)
  {
    freeze = 3;
  }
  else if(temp <= -38)
  {
    freeze = 2;
  }
  else if(temp <= 32)
  {
    freeze = 1;
  }

  //Display results
  std::cout << "\nAt " << temp << " degrees the following elements will freeze: " << std::endl;
  //Freeze switch
  switch (freeze)
  {
    case 4 : std::cout << "* Oxygen\n";
    case 3 : std::cout << "* Ethyl Alcohol\n";
    case 2 : std::cout << "* Mercury\n";
    case 1 : std::cout << "* Water\n";
      break;
    case 0 : std::cout << "No elements freeze at this temperature." << std::endl;
  }

  //Initalize variable to use in boil switch
  if (temp >= 676)
  {
    boil = 4;
  }
  else if (temp >= 212)
  {
    boil = 3;
  }
  else if(temp >= 172)
  {
    boil = 2;
  }
  else if(temp >= -306)
  {
    boil = 1;
  }

  //Display results
  std::cout << "\nAt " << temp << " degrees the following elements will boil: " << std::endl;
  //Boil switch
  switch (boil)
  {
    case 4 : std::cout << "* Mercury\n";
    case 3 : std::cout << "* Water\n";
    case 2 : std::cout << "* Ethyl Alcohol\n";
    case 1 : std::cout << "* Oxygen\n";
      break;
    case 0 : std::cout << "No elements boil at this temperature." << std::endl;
  }


















}