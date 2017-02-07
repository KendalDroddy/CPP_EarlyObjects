/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: A soft drink company recently surveyed 16,500 of its
** customers and found that approximately 15 percent of those surveyed
** purchase one or more energy drinks per week. Of those customers who
** purchase energy drinks, approximately 52 percent of them purchase
** citrus flavored energy drinks. Write a program that displays the 
** following:
**  * The approximate number of customers in the survey who purchase
**    one or more drinks per week.
**  * The approximate number of customers in the survey who purchase
**    flavored energy drinks.
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  int customers = 16500;
  double twoPurchase = .15 * customers,
         citrus = .52 * twoPurchase;

  //Display results
  cout << "Customers who purchase one or more energy drinks weekly: " << twoPurchase << "\n";
  cout << "Customers who purchase citrus flavored energy drinks: " << citrus << endl;

}