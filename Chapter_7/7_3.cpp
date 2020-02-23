/*********************************************************************
** Author: Kendal Droddy
**
** Date: April 11, 2017
**
** Challenge: Design a class for a widget manufacturing plant. 
** Assuming that 10 widgets may be produced each hour, the class 
** object will calculate how many days it will take to produce any 
** number of widgets. (The plant operates two 8-hour shifts per day.) 
** Write a program that asks the user for the number of widgets that 
** have been ordered and then displays the number of days it will 
** take to produce them. Think about what values your program should 
** accept for the number of widgets ordered.
*********************************************************************/
#include <iostream>
#include <math.h>

class Widget
{
  private:
    double widgetsPerHour,
           shiftLength,
           shiftsPerDay;

  public:
    Widget()
    {
      widgetsPerHour = 10;
      shiftLength = 8;
      shiftsPerDay = 2;
    }

    double calcWidgets(int widgetsNeeded)
    {
      double days = ceil(widgetsNeeded / (widgetsPerHour * shiftLength * shiftsPerDay));
      return days;
    }
};

int main()
{
  double xWidgets;
  //Get user input
  std::cout << "How many widgets do you need?" << std::endl;
  std::cin >> xWidgets;

  //Create object and calculate output
  Widget w1;
  std::cout << "Your order will take " << w1.calcWidgets(xWidgets) << " days." << std::endl;
}