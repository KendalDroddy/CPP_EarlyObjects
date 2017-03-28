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
#include <iomanip>
#include <fstream>
using std::setw;

//Function prototypes
void daysOnTrip(int &);
void airfareCost(double &);
void rentalCost(double &);
void conferenceFees(double &);
void hotelCost(double &);
void taxiCost(double &);
void parkingFees(double &);
void milesDriven(int &);
void departureTime(int &);
void arrivalTime(int &); 
void breakfastCost(double &, double &, int, int, int);
void lunchCost(double &, double &, int, int, int);
void dinnerCost(double &, double &, int, int, int);

int main()
{
  //Variables
  double airfare, rental, confFees, hotel, taxi,
         parking, breakfast, breakfastAllowed, lunch,
         lunchAllowed, dinner, dinnerAllowed;
  int    days,
         miles,
         arrival,
         departure;
  std::ofstream outputFile;

  //Call functions to get user input for variables
  daysOnTrip(days);
  departureTime(departure);
  arrivalTime(arrival);
  airfareCost(airfare);
  rentalCost(rental);
  hotelCost(hotel);
  taxiCost(taxi);
  parkingFees(parking);
  milesDriven(miles);
  conferenceFees(confFees);
  breakfastCost(breakfast, breakfastAllowed, days, arrival, departure);
  lunchCost(lunch, lunchAllowed, days, arrival, departure);
  dinnerCost(dinner, dinnerAllowed, days, arrival, departure);

  //Open output file
  outputFile.open("travelReport.txt");
  
  //Report header
  outputFile <<"\n-------------------------------------------------------\n"
                "* Category      Total Spent ($)    Amount Allowed ($) *\n"
                "-------------------------------------------------------" << std::endl;
  outputFile << std::showpoint << std::fixed << std::setprecision(2);
  outputFile << setw(13) << "Airfare: " << setw(14) << airfare << setw(17) << airfare << std::endl;
  outputFile << setw(13) << "Rental Car: " << setw(14) << rental << setw(17) << rental << std::endl;
  outputFile << setw(13) << "Private Car: " << setw(14) << .58 * miles << setw(17) << .58 * miles << std::endl;
  outputFile << setw(13) << "Taxi Use: " << setw(14) << taxi << setw(17) << days * 40.0 << std::endl;
  outputFile << setw(13) << "Hotel: " << setw(14) << hotel << setw(17) << days * 90.0 << std::endl;
  outputFile << setw(13) << "Conference: " << setw(14) << confFees << setw(17) << confFees << std::endl;
  outputFile << setw(13) << "Breakfast: " << setw(14) << breakfast << setw(17) << breakfastAllowed << std::endl;
  outputFile << setw(13) << "Lunch: " << setw(14) << lunch << setw(17) << lunchAllowed << std::endl;
  outputFile << setw(13) << "Dinner: " << setw(14) << dinner << setw(17) << dinnerAllowed << std::endl;
  outputFile << setw(13) << "Total: " << setw(14) << airfare + rental + taxi + (.58 * miles) 
              + hotel + confFees + breakfast + lunch + dinner << setw(17) << airfare + rental +
              (.58 * miles) + (days * 130.0) + confFees + breakfastAllowed + lunchAllowed
              + dinnerAllowed << std::endl;
}
 /**************************************************************
 **                      breakfastCost()                       
 ** Uses departure and arrival time to calculate number of 
 ** breakfasts allowed. Gets user input for cost of breakfasts.
 **************************************************************/
 void breakfastCost(double &breakfast, double &breakfastAllowed, int days, int arrival, int departure)
 {
  int breakfastDays;
  //Adjust breakfasts based on departure time
  if (departure == 1)
  {
    breakfastDays = days;
  }
  else
  {
    breakfastDays = days - 1;
  }
  //Adjust breakfasts based on arrival time
  if (arrival == 1)
  {
    breakfastDays -= 1;
  }
  //Get user input for breakfast cost
  std::cout << "Enter total amount spent on breakfast during the trip: $";
  std::cin >> breakfast;
  breakfastAllowed = breakfastDays * 18;
 }
/**************************************************************
 **                      lunchCost()                       
 ** Uses departure and arrival time to calculate number of 
 ** lunches allowed. Gets user input for cost of lunches.
 **************************************************************/
 void lunchCost(double &lunch, double &lunchAllowed, int days, int arrival, int departure)
 {
  int lunchDays;
  //Adjust breakfasts based on departure time
  if (departure == 2 || departure == 1)
  {
    lunchDays = days;
  }
  else
  {
    lunchDays = days - 1;
  }
  //Adjust breakfasts based on arrival time
  if (arrival == 1 || arrival == 2)
  {
    lunchDays -= 1;
  }
  //Get user input for breakfast cost
  std::cout << "Enter total amount spent on lunch during the trip: $";
  std::cin >> lunch;
  lunchAllowed = lunchDays * 12;
 }
 /**************************************************************
 **                      dinnerCost()                       
 ** Uses departure and arrival time to calculate number of 
 ** dinners allowed. Gets user input for cost of dinners.
 **************************************************************/
 void dinnerCost(double &dinner, double &dinnerAllowed, int days, int arrival, int departure)
 {
  int dinnerDays;
  //Adjust breakfasts based on departure time
  if (departure == 2 || departure == 1 || departure == 3)
  {
    dinnerDays = days;
  }
  else
  {
    dinnerDays = days - 1;
  }
  //Adjust breakfasts based on arrival time
  if (arrival == 1 || arrival == 2 || arrival == 3)
  {
    dinnerDays -= 1;
  }
  //Get user input for breakfast cost
  std::cout << "Enter total amount spent on dinner during the trip: $";
  std::cin >> dinner;
  dinnerAllowed = dinnerDays * 20;
 }

 /**************************************************************
 **                      arrivalTime()                       
 ** Asks user to select their arrival time from a menu.
 **************************************************************/
 void arrivalTime(int &arrival)
 {
  std::cout << "Select your arrival time from the menu.\n";
  do
  {
    std::cout << "1. Arrived before 8 A.M.\n";
    std::cout << "2. Arrived after 8 A.M.\n";
    std::cout << "3. Arrived after 1 P.M.\n";
    std::cout << "4. Arrived after 7 P.M." << std::endl;
    std::cin >> arrival;
  }while(arrival < 1 || arrival > 4);
 }
 /**************************************************************
 **                      departureTime()                       
 ** Asks user to select their departure time from a menu.
 **************************************************************/
 void departureTime(int &departure)
 {
  std::cout << "Select your departure time from the menu.\n";
  do
  {
    std::cout << "1. Departed before 7 A.M.\n";
    std::cout << "2. Departed before noon.\n";
    std::cout << "3. Departed before 6 P.M.\n";
    std::cout << "4. Departed after 6 P.M." << std::endl;
    std::cin >> departure;
  }while(departure < 1 || departure > 4);
 }

 /**************************************************************
 **                      mileDriven()                       
 ** Gets the total amount number of miles driven if a private
 ** vehicle was used during the trip.
 **************************************************************/
 void milesDriven(int &miles)
 {
  char choice;
  do
  {
  std::cout << "Was a private vehicle used during this trip?\n";
  std::cout << "Enter Y for Yes or N for No." << std::endl;
  std::cin >> choice;
  }while(choice != 'Y' && choice != 'y' && choice != 'n' && choice != 'N');

  if (choice == 'y' || choice == 'Y')
  {
    do
    {
      std::cout << "Enter total miles driven: ";
      std::cin >> miles;
    }while(miles <= 0);
  }
  else
  {
    miles = 0;
  }
 }
 /**************************************************************
 **                      parkingFees()                       
 ** Gets the total amount spent on parking fees.
 **************************************************************/
 void parkingFees(double &parking)
 {
  do
  {
  std::cout << "Enter total amount spent on parking fees: $";
  std::cin >> parking;
  }while(parking < 0);
 }
 /**************************************************************
 **                      taxiCost()                       
 ** Gets the total amount spent on taxis per day.
 **************************************************************/
 void taxiCost(double &taxi)
 {
  do
  {
  std::cout << "Enter total amount spent on taxis: $";
  std::cin >> taxi;
  }while(taxi < 0);
 }
 /**************************************************************
 **                      hotelCost()                       
 ** Gets the total amount spent on hotels per day.
 **************************************************************/
 void hotelCost(double &hotel)
 {
  do
  {
  std::cout << "Enter hotel cost per night: $";
  std::cin >> hotel;
  }while(hotel < 0);
 }
 /**************************************************************
 **                      conferenceFees()                       
 ** Gets the total amount spent on conference fees.
 **************************************************************/
 void conferenceFees(double &confFees)
 {
  do
  {
  std::cout << "Enter amount spent on conference fees: $";
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
