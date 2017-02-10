/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 8, 2017
**
** Description: Write a program that asks the user for the number of
** males and females registered in a class. The program should
** compute and report what percentage of the students are  male and
** what percentage are female. Display the output with two decimal
** points.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Define variables
  int males,
      females,
      totalStudents;
  double percentMale,
         percentFemale;

  //Get user input
  std::cout << "How many males are in the class: ";
  std::cin >> males;
  std::cout << "How many females are in the class: ";
  std::cin >> females;

  //Calculate percentages
  totalStudents = males + females;
  percentMale =  (double) males / totalStudents * 100;
  percentFemale =  (double) females / totalStudents * 100;
  
  //Display results
  std::cout << "Females: " << std::fixed << std::setprecision(2) << percentFemale << "\%" << std::endl;
  std::cout << "Males: " << percentMale << "\%" << std::endl;

}