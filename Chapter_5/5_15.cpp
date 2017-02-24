/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 23, 2017
**
** Challenge: A teacher has asked all her students to line up single 
** file according to their first name. For example, in one class Amy 
** will be at the front of the line and Yolanda will be at the end. 
** Write a program that prompts the user to enter a number between 1 
** and 20 for the number of students in the class and then loops to 
** read in that many names. Once all the names have been read in, it 
** reports which student would be at the front of the line and which 
** one would be at the end of the line. You may assume that no two 
** students have the same name.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
  std::string student,
              firstStudent,
              lastStudent;
  int numStudents;

  //Get number of students from user
  do
  {
    std::cout << "Enter the number of student's in line: ";
    std::cin >> numStudents;
  }while(numStudents < 1 || numStudents > 20);

  //Accept user input
  for (int i = 1; i <= numStudents; i++)
  {
    std::cout << "Enter name of student " << i << ": ";
    std::cin >> student;
    //Initialize first and last student
    if (i == 1)
    {
      firstStudent = student;
      lastStudent = student;
    }
    else if (i == numStudents) //Update last student
    {
      lastStudent = student;
    }
  }
  //Display results
  std::cout << "\nFirst student in line: " << firstStudent << std::endl;
  std::cout << "Last student in line: " << lastStudent << std::endl;
}