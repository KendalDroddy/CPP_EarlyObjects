/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 2, 2017
**
** Challenge: Write a modular program that accepts up to 10 integer 
** test scores in the range of O to 100 from the user and stores them 
** in an array. Then main should report how many perfect scores were 
** entered (i.e., scores of 100), using a value-returning count 
** Perfect function to help it .
*********************************************************************/
#include <iostream>

//Funtion prototype
int countPerfect(const int[], int);

//Main
int main()
{
  //Declarations
  int const ARRAY_SIZE = 10;
  int test[ARRAY_SIZE];

  //Get user input for array
  std::cout << "\nEnter a value between 0 and 100 for each test.\n" << std::endl;

  for (int i = 0; i < ARRAY_SIZE; ++i)
  {
    do //Input validation
    {
    std::cout << "Test " << i + 1 << ": ";
    std::cin >> test[i];
    }while(test[i] < 0 || test[i] > 100);
  }

  //Display number of perfect scores
  int perfectScores = countPerfect(test, ARRAY_SIZE);
  std::cout << "Perfect scores: " << perfectScores << std::endl;
}

/************************************************************
 **                  countPerfect()                          
 ** Accepts a const array as parameter and returns the number
 ** of perfect 100 scores.              
 ************************************************************/
 int countPerfect(const int test[], int size)
 {
  int perfect; //Perfect score accumulator

  for (int i = 0; i < size; ++i)
  {
    if (test[i] == 100)
    {
      perfect++;
    }
  }
  return perfect;
 }