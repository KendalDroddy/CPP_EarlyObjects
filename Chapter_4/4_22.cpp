/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: A mobile phone service provides three packages:
**  A: $39.99/mo, 450 minutes included. $0.45/min for any over 450
**  B: $59.99/mo, 900 minutes included. $0.40/min for any over 900
**  C: $69.99/mo, unlimited minutes.
** Write a program that calculates a customer's monthly bill. It 
** should input customer name, which package was purchased, and how
** many minutes were used. It should create a bill that includes 
** input information and the total amount due. It should also display
** how much money could be saved if the customer switched to a 
** different package. If no savings, no message should be printed. 
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Constants for monthly base fee
  double const PACKAGE_A = 39.99;
  double const PACKAGE_B = 59.99;
  double const PACKAGE_C = 69.99;

  //Declare variables
  std::string name;
  double total,
         totalB,
         totalC,
         savings;
  int minutes,
      choice,
      overage; 

  //Get name
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  //Display menu
  std::cout << "\n";
  std::cout << "Choose your plan\n";
  std::cout << "  1. Package A" << std::endl;
  std::cout << "  2. Package B" << std::endl;
  std::cout << "  3. Package C" << std::endl;
  std::cout << "Enter a menu number: ";
  std::cin >> choice;
  
  //Get minutes
  std::cout << "Enter minutes used this month: ";
  std::cin >> minutes;

  //Calculate and display results

  std::cout << "\n***********************\n"
               "*     Monthly Bill    *\n"
               "***********************" << std::endl;
  std::cout << "* Name: " << name << std::endl;
  std::cout << "* Minutes Used: " << minutes << std::endl;

  //Format output
  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  switch(choice)
  {
    case 1: std::cout << "* Package Choice: A" << std::endl;
            if (minutes <= 450)
            {
              std::cout << "* Total Due: $" << PACKAGE_A << std::endl;
            }
            else if (minutes > 450)
            {
              total = ((minutes - 450) * .45) + PACKAGE_A;
              std::cout << "* Total Due: $" << total << std::endl;
              if (total > PACKAGE_B && total < PACKAGE_C)
              {
                savings = total - PACKAGE_B;
                std::cout << "* Switch to Package B to save: $" << savings << std::endl;
              }
              else if (total > PACKAGE_C)
              {
                savings = total - PACKAGE_C;
                std::cout << "* Switch to Package C to save: $" << savings << std::endl;
              }
            }
            break;
    case 2: std::cout << "* Package Choice: B" << std::endl;
            if (minutes <= 900) 
            {
              std::cout << "* Total Due: $" << PACKAGE_B << std::endl;
            }
            else if (minutes > 900)
            {
              total = ((minutes - 900) * .40) + PACKAGE_B;
              std::cout << "* Total Due: $" << total << std::endl;
              if (total > PACKAGE_C)
              {
                savings = total - PACKAGE_C;
                std::cout << "* Switch to Package C to save: $" << savings << std::endl;
              }
            }
            break;
    case 3: std::cout << "* Package Choice: C" << std::endl;
            std::cout << "* Total Due: $" << PACKAGE_C << std::endl;
  }
  std::cout << "\n";
}
