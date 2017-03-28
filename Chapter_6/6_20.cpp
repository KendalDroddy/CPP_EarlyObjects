/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 27, 2017
**
** Challenge: Write a program that calculates and displays the total 
** travel expenses of a businessperson on a trip. It should utilize
** functions, which are defined below, to retrieve the necessary
** information from the user. The program should perform the necessary 
** calculations to determine the total amount spent by the business 
** traveler in each category (mileage charges, parking, hotel, meals, 
** etc.) as well as the maximum amount allowed in each category. It 
** should then create a nicely formatted expense report that includes 
** the amount spent and the amount allowed in each category, as well 
** as the total amount spent and total amount allowed for the entire 
** trip. This report should be written to a file.
*********************************************************************/
#include <iostream>

//Function prototypes
void daysOnTrip(int &);
void airfareCost(double &);
void rentalCost(double &);
void conferenceFees(double &);

int main()
{
  //Variables
  double airfare,
         rental,
         confFees;
  int    days;


}
 /**************************************************************
 **                      conferenceFees()                       
 ** Gets the total amount spent on conference fees.
 **************************************************************/
 void conferenceFees(double &confFees)
 {
  do
  {
  std::cout << "Enter amount spent on conference fees: &";
  std::cin >> confFees;
  }while(confFees < 0);
 }

/**************************************************************
 **                      daysOnTrip()                       
 ** Gets the total number of days spent on the trip.
 **************************************************************/
 void daysOnTrip(int &days)
 {
  do
  {
  std::cout << "Enter total days travelled (at least 1): ";
  std::cin >> days;
  }while(days < 1);
 }
 /**************************************************************
 **                      airfareCost()                       
 ** Gets the total amount spent on any airfare.
 **************************************************************/
 void airfareCost(double &airfare)
 {
  char choice;
  do
  {
  std::cout << "Was airfare purchased for this trip? Enter Y\n";
  std::cout << "for Yes or N for No." << std::endl;
  std::cin >> choice;
  }while(choice != 'Y' && choice != 'y' && choice != 'n' && choice != 'N');

  if (choice == 'y' || choice == 'Y')
  {
    do
    {
      std::cout << "Enter amount spent on airfare: $";
      std::cin >> airfare;
    }while(airfare <= 0);
  }
  else
  {
    airfare = 0;
  }
 }
 /**************************************************************
 **                      rentalCost()                       
 ** Gets the total amount spent on any rental cars.
 **************************************************************/
 void rentalCost(double &rental)
 {
  char choice;
  do
  {
  std::cout << "Was a rental car purchased for this trip? Enter Y\n";
  std::cout << "for Yes or N for No." << std::endl;
  std::cin >> choice;
  }while(choice != 'Y' && choice != 'y' && choice != 'n' && choice != 'N');

  if (choice == 'y' || choice == 'Y')
  {
    do
    {
      std::cout << "Enter cost of rental for the entire trip: $";
      std::cin >> rental;
    }while(rental <= 0);
  }
  else
  {
    rental = 0;
  }
 }
