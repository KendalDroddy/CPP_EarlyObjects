/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 13, 2017
**
** Challenge: Modify the program you wrote in Challenge 22 so that it
** reports the number of pizzas you need to buy for a party if each
** person attending is expected to eat an average of four slices. The
** program should ask for the diameter of the pizzas to be ordered. It
** should then calculate and display the number of pizzas to purchase.
** Because it is impossible to buy a part of a pizza, the number of
** required pizzas should be displayed as a whole number.
*********************************************************************/
#include <iostream>
#include <cmath>

int main()
{
  //Define variables
  double const PI = 3.14,
               SLICE_AREA = 14.25; //inches
  double diameter,
         radius,
         area;
  int    slices,
         attendees,
         numberPizzas;

  //Get user input
  std::cout << "Enter the number of attendees: ";
  std::cin >> attendees;
  std::cout << "Enter the pizza diameter in inches: ";
  std::cin >> diameter;

  //Calculate results
  radius = diameter / 2;
  area = PI * std::pow(radius, 2);
  slices = (int) area / SLICE_AREA;
  numberPizzas = (attendees * 4) / slices;

  //Display results
  std::cout << "Number of pizzas to purchase: " << numberPizzas << std::endl;

}