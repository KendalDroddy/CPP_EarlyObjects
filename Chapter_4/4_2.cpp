/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 15, 2017
**
** Challenge: Write a program that asks the user to enter a number 
** within the range of 1 through 10. Use a switch statement to display 
** the Roman numeral version of that number.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variable
  int number;

  //Get user input
  std::cout << "Please enter a number between 1 and 10: ";
  std::cin >> number;

  //Input validation
  if(number > 0 && number < 11)
    //Switch statement
    switch (number)
    {
      case 1: std::cout << "The Roman number for 1 is: I" << std::endl;
        break;
      case 2: std::cout << "The Roman number for 2 is: II" << std::endl;
        break;
      case 3: std::cout << "The Roman number for 3 is: III" << std::endl;
        break;
      case 4: std::cout << "The Roman number for 4 is: VI" << std::endl;
        break;
      case 5: std::cout << "The Roman number for 5 is: V" << std::endl;
        break;
      case 6: std::cout << "The Roman number for 6 is: VI" << std::endl;
        break;
      case 7: std::cout << "The Roman number for 7 is: VII" << std::endl;
        break;
      case 8: std::cout << "The Roman number for 8 is: VIII" << std::endl;
        break;
      case 9: std::cout << "The Roman number for 9 is: IX" << std::endl;
        break;
      case 10: std::cout << "The Roman number for 10 is: X" << std::endl;
        break;
    }
  else
  {
    std::cout << "\n";
    std::cout << "Please run the program again and enter  \n";
    std::cout << "a number within the specified range." << std::endl;
    std::cout << "\n";
  }
  return 0;
}