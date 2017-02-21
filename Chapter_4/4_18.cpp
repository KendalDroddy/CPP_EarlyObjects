/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 19, 2017
**
** Challenge: 
The speed of so und varies depending on the medium through which it 
** travels. In general, sound travels fastest in rigid media, such as 
** steel, slower in liquid media, such as water, and slowest of all 
** in gases, such as air. 
**          Medium      Speed(feet per sec)
**            Air            1,100
**            Water          4,900
**            Steel          16,400
** Write a program that displays a menu allowing the user to select
** air, water, or steel, then enter the number of feet a sound wave
** will travel in the selected medium. The program will then display
** the amount of time it will take. (Round to four decimal places.)
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Speed constants
  const int AIR   = 1100;
  const int WATER = 4900;
  const int STEEL = 16400;
  
  //Declare variables
  int    choice;
  double seconds,
         feet;

  //Display menu
  std::cout << "\n";
  std::cout << "Speed of Sound in Various Mediums\n";
  std::cout << "  1. Air" << std::endl;
  std::cout << "  2. Water" << std::endl;
  std::cout << "  3. Steel" << std::endl;
  std::cout << "Enter a menu number: ";
  std::cin >> choice;

  //Validate choice
  if (choice < 1 || choice > 3)
  {
    std::cout << "Run the program again with a valid menu choice." << std::endl;
    return 0;
  }

  //Get user input and validate
  std::cout << "Enter the number of feet a sound wave will travel through the selected medium: ";
  std::cin >> feet;
  if (feet < 0)
  {
    std::cout << "Run the program again with valid input." << std::endl;
    return 0;
  }

  //Format output to only show four decimal places
  std::cout << std::fixed << std::showpoint << std::setprecision(4);

  //Calculate and display results
  switch (choice)
  {
    case 1 : seconds = feet / AIR;
             std::cout << "Time needed for a sound wave to travel " << feet << " feet through air: " << seconds << std::endl;
             break;
    case 2 : seconds = feet / WATER;
             std::cout << "Time needed for a sound wave to travel " << feet << " feet through water: " << seconds << std::endl;
             break;
    case 3 : seconds = feet / STEEL;
             std::cout << "Time needed for a sound wave to travel " << feet << " feet through steel: " << seconds << std::endl;
             break;
  }

}
