/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 27, 2017
**
** Challenge: Starting with the version described in Chapter 4, 
** modify the program again so that it displays a menu allowing the 
** user to select an addition, subtraction, or multiplication problem. 
** The final selection on the menu should let the user quit the 
** program. After the user has finished the math problem, the program 
** should display the menu again. This process must repeat until the 
** user chooses to quit the program. If the user selects an item not 
** on the menu, the program should print an error message and then 
** display the menu again.
*********************************************************************/
#include <iostream>

int main()
{ 
  //Initialize constant
  double const PI = 3.14159;

  //Define variables
  int    choice,
         numOne,
         numTwo;

  //Loop the entire program
  do
  {
    //Display menu until valid choice is entered
    std::cout << "\n";
    std::cout << "Math Calculator\n";
    std::cout << "  1. Addition Problem" << std::endl;
    std::cout << "  2. Subtraction Problem" << std::endl;
    std::cout << "  3. Mulitplication Problem" << std::endl;
    std::cout << "  4. Quit \n" << std::endl;

    //Get user input
    std::cout << "Enter your choice (1 - 4): ";
    std::cin >> choice;
    

    //Switch statement based on user input
    switch(choice)
    {
      case 1: std::cout << "Enter the first number: "; //Addition problem
              std::cin >> numOne;
              std::cout << "Enter the second number: ";
              std::cin >> numTwo;
              std::cout << "The sum of these numbers is: " << numOne + numTwo << std::endl;
              break;
      case 2: std::cout << "Enter the first number: "; //Subtraction problem
              std::cin >> numOne;
              std::cout << "Enter the second number: ";
              std::cin >> numTwo;
              std::cout << "The difference of these numbers is: " << numOne - numTwo << std::endl;
              break;
      case 3: std::cout << "Enter the first number: "; //Multiplcation problem
              std::cin >> numOne;
              std::cout << "Enter the second number: ";
              std::cin >> numTwo;
              std::cout << "The product of these numbers is: " << numOne * numTwo << std::endl;
              break;
      case 4: std::cout << "Exiting the program." << std::endl; //Exit program
              return 0;
    }
  }while(choice != 4);
}