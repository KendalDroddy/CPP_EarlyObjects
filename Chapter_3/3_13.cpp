/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Description: A cookie recipe calls for the following ingredients:
**       *1.5 cups sugar
**       *1 cup butter
**       *2.75 cups flour
** The recipe produces 48 cookies with these amounts of ingredients. 
** Write a program that asks the user how many cookies he or she 
** wants and then displays the number of cups of each ingredient 
** needed for the specified number of cookies. 
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  double sugarPerCookie = 1.5 / 48,
         butterPerCookie = 1.0 / 48,
         flourPerCookie = 2.75 / 48;
  int cookies;
  
  //Get user input
  std::cout << "How many cookies would you like to bake: ";
  std::cin >> cookies;

  //Calculate and display results
  std::cout << "To bake " << cookies << " cookies you will need: \n";
  std::cout << sugarPerCookie * cookies << " cups sugar \n";
  std::cout << butterPerCookie * cookies << " cups butter \n";
  std::cout << flourPerCookie * cookies << " cups flour" << std::endl;

}