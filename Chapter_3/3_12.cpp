/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Description: A bag of cookies holds 30 cookies. The calorie info
** on the bag claims that there are 10 servings and that one serving
** equals 240 calories. Write a program that asks the user to input
** how many cookies they ate and then reports how many total calories
** were consumed.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  int caloriesPerCookie = 240 / 3,
      cookiesEaten,
      caloriesEaten;

  //Get user input
  std::cout << "How many cookies did you eat: ";
  std::cin >> cookiesEaten;

  //Calculate and display results
  caloriesEaten = cookiesEaten * caloriesPerCookie;
  std::cout << cookiesEaten << " is equal to: " << caloriesEaten << " calories" << std::endl;

}