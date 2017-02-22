/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 22, 2017
**
** Challenge: If moderately active persons cut their calorie intake 
** by 500 calories a day, they can typically lose about 4 pounds a 
** month. Write a program that has the users enter their starting 
** weight and then creates and displays a table showing what their 
** expected weight will be at the end of each month for the next 6 
** months if they stay on this diet.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Declare variable
  int weight;

  //Get and validate user input
  do
  {
    std::cout << "Enter your weight: ";
    std::cin >> weight;
  }while(weight < 0); //Weight must be a positive integer

  //Program header
  std::cout <<"\n-------------------------------------------\n"
                "* This table displays weight loss for 6   *\n"
                "* months if calories are cut by 500 a day *\n"
                "-------------------------------------------" << std::endl;

  //Table header
  std::cout << std::setw(10) << " " << " Month  Weight" << std::endl;
  std::cout << std::setw(10) << " " << "--------------" << std::endl;
  
  //Populate table with month and weight data
  for (int i = 1; i <= 6; ++i)
  {
    weight -= 4; //Decrement weight by 4 each month
    std::cout << std::setw(14) << i << std::setw(8) << weight << std::endl;
  }
}