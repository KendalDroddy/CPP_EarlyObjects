/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 11, 2017
**
** Description: Write a program that produces a bar chart showing the 
** population growth of Prairieville, a small town in the Midwest, at 
** 20-year intervals during the past 100 years. The program should 
** read in the population figures (rounded to the nearest 1,000 people) 
** for 1910, 1930, 1950, 1970, 1990, and 2010 from a file. For each 
** year it should display the date and a bar consisting of one asterisk 
** for each 1,000 people.
*********************************************************************/
#include <iostream>
#include <fstream>

int main()
{
  //Variables
  int population;
  std::ifstream inputFile;

  //Open input file and check for opening error
  inputFile.open("People.txt");
  if (!inputFile)
  {
    std::cout << "Error opening file." << std::endl;
  }

  //Program header
  std::cout <<"\n----------------------------------------\n"
                "*    PRAIRIEVILLE POPULATION GROWTH    *\n"
                "*    (each * represents 1000 people)   *\n"
                "----------------------------------------" << std::endl;

  //Get input for each year
  for (int i = 0; i < 6; ++i)
  { 
    //Use a switch to display the proper year for each iteration
    switch(i)
    {
      case 0 : std::cout << "1910 ";
        break;
      case 1 : std::cout << "1930 ";
        break;
      case 2 : std::cout << "1950 ";
        break;
      case 3 : std::cout << "1970 ";
        break;
      case 4 : std::cout << "1990 ";
        break;
      case 5 : std::cout << "2010 ";
        break;
    }

    //Get input once per iteration
    inputFile >> population;

    //Divide by 10 to get number of asterisks needed
    population /= 1000;

    //Print asterisks
    for (int i = 0; i < population; ++i)
    {
      std::cout << "*";
    }

    //End line at end of each iteration
    std::cout << std::endl;
  }
  
  //Close the input file
  inputFile.close();
}