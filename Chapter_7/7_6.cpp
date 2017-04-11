/*********************************************************************
** Author: Kendal Droddy
**
** Date: April 11, 2017
**
** Challenge: Design a Tips class that calculates the gratuity on a 
** restaurant meal. Its only class member variable, taxRate, should 
** be set by a one-parameter constructor to whatever rate is passed 
** to it when a Tips object is created.If no argument is passed,a 
** default tax rate of .065 should be used. The class should have 
** just one public function, computeTip. This function needs to 
** accept two arguments, the total bill amount and the tip rate. It 
** should use this information to compute what the cost of the meal 
** was before the tax was added. It should then apply the tip rate to 
** just the meal cost portion of the bill to compute and return the 
** tip amount. Demonstrate the class by creating a program that 
** creates a single Tips object, then loops multiple times to allow 
** the program user to retrieve the correct tip amount using various 
** bill totals and desired tip rates.
*********************************************************************/
#include <iostream>

class Tips
{
private:
  double taxRate;
public:
  //Default constructor
  Tips()
  {
    taxRate = .065;
  }
  //Overload constructor
  Tips(double t)
  {
    taxRate = t;
  }
  //computeTip member function
  double computeTip(double bill, double rate)
  {
    //Calculate bill before tax
    double preTax = bill - (bill * rate);

    //Return tip amount
    return preTax * rate;
  }
};

int main()
{
  //Create Tips object and variables
  Tips   tip1;
  int    choice;
  double bill, 
         tipRate,
         tip;

  //Provide tip amounts until user quits
  do
  {
    //Get user input
    std::cout << "Enter total bill amount: $";
    std::cin >> bill;
    std::cout << "Enter tip rate in decimal form e.g. (.05): ";
    std::cin >> tipRate;

    //Calculate and display tip amount
    tip = tip1.computeTip(bill, tipRate);
    std::cout << "Tip amount: $" << tip << "\n\n";

    //See if user wants to quit or loop
    std::cout << "Enter 1 to calculate a new tip or 0 to quit: ";
    std::cin >> choice;
  }while(choice != 0);
}