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
  //Define variables
  unsigned seed;
  int      choice,
           randomOne,
           randomTwo,
           userAnswer,
           correctAnswer;

  //Use time function to seed srand
  seed = time(0);
  srand(seed);

  //Generate random numbers between 10 and 50 and solution
  randomOne = rand() % (50 - 10 + 1) + 10;
  randomTwo = rand() % (50 - 10 + 1) + 10;

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
    
    //Display problem to user only if choice is 1-3
    if (choice > 0 && choice < 4)
    {
      std::cout << "Please solve the following problem: " << std::endl;
      std::cout << " " << randomOne << std::endl;
    }
    
    //Switch statement based on user input
    switch(choice)
    {
      case 1: std::cout << "+" << randomTwo << std::endl;
              correctAnswer = randomOne + randomTwo; //Addition problem
              break;
      case 2: std::cout << "-" << randomTwo << std::endl;
              correctAnswer = randomOne - randomTwo; //Subtraction problem
              break;
      case 3: std::cout << "*" << randomTwo << std::endl;
              correctAnswer = randomOne * randomTwo; //Multiplication problem
              break;
      case 4: std::cout << "Exiting the program." << std::endl; //Exit program
              return 0;
    }

    //Get users response and display appropriate message
    std::cout << "Enter your answer: ";
    std::cin >> userAnswer;
    if (userAnswer == correctAnswer)
    {
      std::cout << "Congratulations, that's the correct answer!" << std::endl;
    }
    else
    {
    std::cout << "The correct answer is: " << correctAnswer << std::endl;
    } 
  }while(choice != 4);
}