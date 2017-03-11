/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 11, 2017
**
** Description: Modify program 5_15 so that it gets the names from 
** a data file. Names should be read in until there is no more data
** to read.
*********************************************************************/
#include <iostream>
#include <fstream>

int main()
{
  //Declare variables
  std::string student,
              firstStudent,
              lastStudent;
  int numStudents;
  std::ifstream inputFile;

  //Open input file and check for errors
  inputFile.open("LineUp.txt");

  if (inputFile.fail())
  {
    std::cout << "Error opening file." << std::endl;
  }
  else
  {
    //Initialize first and last student with first name from input
    inputFile >> student;
    firstStudent = student;
    lastStudent = student;

    //Process the remaining input
    while(inputFile >> student)
    {
      if (student > lastStudent)
      {
        lastStudent = student;
      }
      if (student < firstStudent)
      {
        firstStudent = student;
      }
    }
  }
  //Display results
  std::cout << "\nFirst student in line: " << firstStudent << std::endl;
  std::cout << "Last student in line: " << lastStudent << std::endl;

  //Close input file
  inputFile.close();
}