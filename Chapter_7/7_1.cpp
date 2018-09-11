/*********************************************************************
** Author: Kendal Droddy
**
** Date: September 10, 2018
**
** Challenge: Design a class called Date that has integer data members
** to store month, day, and year. The class should have a member
** function to display the date.
*********************************************************************/
#include <iostream>

class Date
{
  private:
    int month,
        day,
        year;

  public:
    // Default constructor
    Date()
    {
      month = 1;
      day = 1;
      year = 2001;
    }
    // Overloaded constructor
    Date(int m, int d, int y)
    {
      month = m;
      day = d;
      year = y;
    }
    // Print functions
    void printOne()
    {
      std::cout << month <<"\\" << day << "\\" << year << std::endl;
    }
};

int main()
{
  Date d1(12, 25, 2018);
  d1.printOne();
}