/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 16, 2017
**
** Challenge: Write a program that determines which of a company's 
** four divisions (Northeast , Southeast , Northwest, and Southwest) 
** had the greatest sales for a quarter. It should include the 
** two functions, getSales() and findHighest, which are defined 
** below in the comments.
*********************************************************************/
#include <iostream>

//Function prototypes
double getSales(std::string);
void findHighest(double, double, double, double);

int main()
{
  //Variables
  double Northeast, Southeast, Northwest, Southwest;

  //Get user input by calling getSales() for each region
  std::cout << "Enter the quarterly sales totals for the following divisions\n";
  Northeast = getSales("Northeast");
  Southeast = getSales("Southeast");
  Northwest = getSales("Northwest");
  Southwest = getSales("Southwest");

  //Call findHighest() to get region with highest sales
  findHighest(Northeast, Southeast, Northwest, Southwest);
}

/*********************************************************************
**                             getSales
** Function is passed name of a division. It asks for that division's
** quarterly sales, validates that input is not less than 0, then
** returns it.
*********************************************************************/
double getSales(std::string division)
{
  double sales;
  std::cout << division << ": $";

  //Input validation
  do
  {
  std::cin >> sales;
  }while(sales < 0);
  return sales;
}

/*********************************************************************
**                           findHighest
** Function is passed four sales totals. It determines which is the
** largest and prints the name of the highest grossing division along
** with its sales total.
*********************************************************************/
void findHighest(double div1, double div2, double div3, double div4)
{
  //Compare and print out statement for highest value
  if (div1 > div2 && div1 > div3 && div1 > div4)
  {
    std::cout << "Northeast is the highest grossing division at $" << div1 << std::endl;
  }
  else if (div2 > div1 && div2 > div3 && div2 > div4)
  {
    std::cout << "Southeast is the highest grossing division at $" << div2 << std::endl;
  }
  else if(div3 > div1 && div3 > div2 && div3 > div4)
  {
    std::cout << "Northwest is the highest grossing division at $" << div3 << std::endl;
  }
  else
    std::cout << "Southwest is the highest grossing division at $" << div4 << std::endl;
}