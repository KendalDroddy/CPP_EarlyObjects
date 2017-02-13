/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 12, 2017
**
** Challenge: Write a program that can be used as a math tutor for a 
** young student. The program should display two random numbers 
** between 1 and 9 to be added, such as 2 + 1. After the student has 
** entered an answer and pressed the [Enter] key, the program should 
** display the correct answer so the student can see if his or her 
** answer is correct.
*********************************************************************/
#include <iostream>
#include <cstdlib>

int main()
{
  //Define variables
  unsigned seed;
  int randomOne,
      randomTwo,
      answer;
  //Use time function to seed srand
  seed = time(0);
  srand(seed);

  //Generate random numbers
  randomOne = rand() % 9 + 1;
  randomTwo = rand() % 9 + 1;
  
  //Display problem to user
  std::cout << "Please solve the following problem: " << std::endl;
  std::cout << " " << randomOne << std::endl;
  std::cout << "+" << randomTwo << std::endl;
  std::cout << "Enter your answer: ";
  std::cin >> answer;
  std::cout << "The correct answer is: " << randomOne + randomTwo << std::endl;
}