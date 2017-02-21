/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 19, 2017
**
** Challenge: Write a program that asks for the number of calories and 
** fat grams in a food. The program should display the percentage of 
** calories that come from fat. If the calories from fat are less 
** than 30 percent of the total calories of the food, it should also 
** display a message indicating the food is low in fat. One gram of
** fat has 9 colories.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
  double caloriesFromFat,
         percentCalories;
  int    calories,
         fat;

  //Get user input and validate
  std::cout << "Enter number of calories: ";
  std::cin >> calories;
  std::cout << "Enter grams of fat: ";
  std::cin >> fat;
  if (calories < 1 || fat < 0)
  {
    std::cout << "Run the program again with valid input." << std::endl;
    return 0;
  }

  //Calculate calories from fat and percentage
  caloriesFromFat = fat * 9;
  percentCalories = (caloriesFromFat / calories) * 100;

  //Display results
  if (percentCalories < 30)
  {
    std::cout << "Percentage of calories from fat: " << percentCalories << "%" << std::endl;
    std::cout << "This food is low in fat." << std::endl;
  }
  else
  {
    std::cout << "Percentage of calories from fat: " << percentCalories << "%" << std::endl;
  }


}