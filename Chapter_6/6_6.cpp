/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 15, 2017
**
** Challenge: Write a program that asks for the weight of a package 
** and the distance it is to be shipped. This information should be 
** passed to a calculateCharge function that computes and returns the 
** shipping charge to be displayed. The main function should loop to 
** handle multiple packages until a weight of O is entered.
*********************************************************************/
#include <iostream>
#include <iomanip>

//Function prototype
double calculateCharge(int, int);

int main()
{
  //Variables
  int weight,
      distance;
  //Get user input
  std::cout << "Calculate shipping charges for packages, or enter 0 to quit.\n";
  do
  {
  std::cout << "\nEnter package weight (kg): ";
  std::cin >> weight;
  if (weight == 0)
  {
    return 0;
  }
  std::cout << "Enter distance package will be shipped (miles): ";
  std::cin >> distance;

  //Calculate and display results
  double cost = calculateCharge(weight, distance);
  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  std::cout << "Cost to ship package: $" << cost << "\n" << std::endl;
  }while(weight != 0);
}

/*********************************************************************
** calculateCharge()
*********************************************************************/
double calculateCharge(int weight, int distance)
{
  //Declare variable to hold shipping rate
  double rate;
  //Initialize rate depending on package weight
  if (weight < 2)
    rate = 3.1;
  else if(weight > 2 && weight < 6)
    rate = 4.20;
  else if(weight > 6 && weight < 10)
    rate = 5.30;
  else
    rate = 6.40;

  //Calculate and return total charge
  return (distance/500.0) * rate;
}