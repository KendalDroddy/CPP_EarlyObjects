/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 16, 2017
**
** Challenge: Write a program that can be used as a math tutor for a 
** young student . The program should display two random numbers 
** between 10 and 50 that are to be added, such as: 24 + 12.
** The program should then wait for the student to enter the answer. 
** If the answer is correct, a message of congratulations should be 
** printed. If the answer is incorrect, a message should be printed 
** showing the correct answer.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  unsigned seed;
  int randomOne,
      randomTwo,
      correctAnswer,
      answer;

  //Use time function to seed srand
  seed = time(0);
  srand(seed);

  //Generate random numbers between 10 and 50 and solution
  randomOne = rand() % (50 - 10 + 1) + 10;
  randomTwo = rand() % (50 - 10 + 1) + 10;
  correctAnswer = randomOne + randomTwo;
  
  //Display problem to user
  std::cout << "Please solve the following problem: " << std::endl;
  std::cout << " " << randomOne << std::endl;
  std::cout << "+" << randomTwo << std::endl;

  //Get users response and display appropriate message
  std::cout << "Enter your answer: ";
  std::cin >> answer;
  if (answer == correctAnswer)
  {
    std::cout << "Congratulations, that's the correct answer!" << std::endl;
  }
  else
  {
  std::cout << "The correct answer is: " << randomOne + randomTwo << std::endl;
  } 
  
}