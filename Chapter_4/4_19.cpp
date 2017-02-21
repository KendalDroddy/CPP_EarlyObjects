/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: The following table shows the speed of sound, in meters
** per second, when travelling through various gases.
**          Medium      Speed(meters per sec)
**         Carbon dioxide    258.0            
**            Air            331.5
**            Helium         972.0
**            Hydrogen       1270.0
** Write a program that displays a menu allowing the user to select 
** one of these four gases. After a valid selection has been made, 
** the program should ask the user to enter the number of seconds 
** (0 to 30) it took for the sound to travel in this medium from its 
** source to the location at which it was detected. The program should 
** then report how far away (in meters) the source of the sound was 
** from the detection location.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Speed constants
  const double CARBON_DIOXIDE = 258.0;
  const double AIR            = 331.5;
  const double HELIUM         = 972.0;
  const double HYDROGEN       = 1270.0;
  
  //Declare variables
  int    choice;
  double seconds,
         meters;

  //Display menu
  std::cout << "\n";
  std::cout << "Speed of Sound in Various Mediums\n";
  std::cout << "  1. Carbon Dioxide" << std::endl;
  std::cout << "  2. Air" << std::endl;
  std::cout << "  3. Helium" << std::endl;
  std::cout << "  4. Hydrogen" << std::endl;
  std::cout << "Enter a menu number: ";
  std::cin >> choice;

  //Validate choice
  if (choice < 1 || choice > 4)
  {
    std::cout << "Run the program again with a valid menu choice." << std::endl;
    return 0;
  }

  //Get user input and validate
  std::cout << "Enter the number of seconds it took for a sound wave\n"
  << "to travel from its source to the location it was detected: ";
  std::cin >> seconds;
  if (seconds < 0)
  {
    std::cout << "Run the program again with valid input." << std::endl;
    return 0;
  }

  //Format output to only show four decimal places
  std::cout << std::fixed << std::showpoint << std::setprecision(2);

  //Calculate and display results
  switch (choice)
  {
    case 1 : meters = seconds * CARBON_DIOXIDE;
             std::cout << "Distance traveled in  " << seconds << " seconds: " << meters << " meters" << std::endl;
             break;
    case 2 : meters = seconds * AIR;
             std::cout << "Distance traveled in  " << seconds << " seconds: " << meters << " meters" << std::endl;
             break;
    case 3 : meters = seconds * HELIUM;
             std::cout << "Distance traveled in  " << seconds << " seconds: " << meters << " meters" << std::endl;
             break;
    case 4 : meters = seconds * HYDROGEN;
             std::cout << "Distance traveled in  " << seconds << " seconds: " << meters << " meters" << std::endl;
             break;
  }

}
