/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: If a scientist knows the wavelength of an electromagnetic 
** wave, she can determine what type of radiation it is. Write a 
** program that asks for the wavelength in meters of an electromagnetic 
** wave and then displays what that wave is. (For example, a wave with 
** a wavelength of 1E-10 meters would be an X-ray.)
*********************************************************************/
#include <iostream>

int main() 
{
  //Declare variables
  double waveLength;

  //Get user input
  std::cout << "Enter the wavelength in meters: ";
  std::cin >> waveLength;

  //Display results
  if (waveLength <= 1E-11)
  {
    std::cout << "A wave measuring " << waveLength << " is a gamma ray." << std::endl;
  }
  else if (waveLength <= 1E-8)
  {
    std::cout << "A wave measuring " << waveLength << " is an x-ray." << std::endl;
  }
  else if (waveLength <= 4E-7)
  {
    std::cout << "A wave measuring " << waveLength << " is a ultraviolet." << std::endl;
  }
  else if (waveLength <= 7E-7)
  {
    std::cout << "A wave measuring " << waveLength << " is visible light." << std::endl;
  }
  else if (waveLength <= 1E-3)
  {
    std::cout << "A wave measuring " << waveLength << " is infrared." << std::endl;
  }
  else if (waveLength <= 1E-2)
  {
    std::cout << "A wave measuring " << waveLength << " is a microwave." << std::endl;
  }
  else
  {
    std::cout << "A wave measuring " << waveLength << " is a radio wave." << std::endl;
  }
}