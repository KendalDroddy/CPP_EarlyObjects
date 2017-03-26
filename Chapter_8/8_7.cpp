/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 26, 2017
**
** Challenge: Write a program that simulates a lottery. The program 
** should have an array of five integers named winningDigits, with a 
** randomly generated number in the range of 0 through 9 for each 
** element in the array. The program should ask the user to enter 
** five digits and should store them in a second integer array named 
** player. The program must compare the corresponding elements in the 
** two arrays and count how many digits match.
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

//Function prototype
void getUserDigits(int array[]);
void displayArray(int array[]);

int main()
{
  //Variables
  unsigned seed;
  int winningDigits[5];
  int userDigits[5];
  int count;

  //Use time function to generate a seed for srand
  seed = time(0);
  srand(seed);

  //Populate winning digit array
  for (int i = 0; i < 5; ++i)
  {
    winningDigits[i] = (rand() % (10));
  }
  //Get user input for second array
  getUserDigits(userDigits);

  //Compare the two arrays
  for (int i = 0; i < 5; ++i)
  {
    if (winningDigits[i] == userDigits[i])
    {
      count++;
    }
  }
  //Print the two arrays and display number of matching digits
  std::cout << " Winning Digits: "; 
  displayArray(winningDigits);
  std::cout << "    Your Digits: "; 
  displayArray(userDigits);
  std::cout << "Matching Digits: " << count << std::endl;
}
/*********************************************************************
**                        getUserDigits()
** Accepts an array of integers and allows user to populate the array.
*********************************************************************/
void getUserDigits(int array[])
{
  int value;
  for (int i = 0; i < 5; ++i)
  {
    do //Validate input
    {
    std::cout << "Enter value " << i + 1 << ": ";
    std::cin >> value;
    }while(value < 0 || value > 9);

    array[i] = value;
  }
}
/*********************************************************************
**                        displayArray()
** Accepts an array of integers and prints the five digits of array.
*********************************************************************/
void displayArray(int array[])
{
  for (int i = 0; i < 5; ++i)
  {
    std::cout << array[i];
  }
  std::cout << std::endl;
}