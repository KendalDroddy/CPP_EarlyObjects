/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 11, 2017
**
** Description: Write a program that reads in from a file a starting 
** month name, an ending month name, and then the monthly rainfall 
** for each month during that period. As it does this, it should sum 
** the rainfall amounts and then report the total rainfall and average 
** rainfall for the period.
*********************************************************************/
#include <iostream>
#include <fstream>

int main()
{
  //Variables
  double rainAmount,
         totalRain;
  int months;
  std::string monthOne,
              monthTwo;
  std::ifstream inputFile;

  //Open file and check for errors
  inputFile.open("Rainfall.txt");

  if (inputFile.fail())
  {
    std::cout << "Error opening file." << std::endl;
  }
  else
  {
    //Read in start and end months
    inputFile >> monthOne;
    inputFile >> monthTwo;

    //Read in rain amounts until EOF
    while(inputFile >> rainAmount)
    {
      totalRain += rainAmount;
      months++;
    }
  }

  //Display results
  std::cout << "\nDuring the months " << monthOne << "-" << monthTwo << " the total \n"
            << "rainfall was " << totalRain << " inches and the average \n"
            << "monthly rainfall was " << totalRain / months << " inches.\n" << std::endl;

  //Close input file
  inputFile.close();
}