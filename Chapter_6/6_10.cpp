/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 15, 2017
**
** Challenge: Write a Boolean function named isPrime,which takes an 
** integer as an argument and returns true if the argument is a prime 
** number, and false otherwise. Demonstrate the function in a complete 
** program.
*********************************************************************/
#include <iostream>
#include <cmath>

//Function prototype
bool isPrime(int);

int main()
{
  //Variable
  int number;
  bool prime;

  //Get user input
  std::cout << "Enter a number and see if it is prime: ";
  std::cin >> number;
  prime = isPrime(number);
  if (prime == true)
    std::cout << number << " is prime." << std::endl;
  else
    std::cout << number << " is not prime." << std::endl;
}

/*********************************************************************
** isPrime()
*********************************************************************/
bool isPrime(int number)
{
  if(number <= 1)
    return false;
  else if(number == 2)
    return true;
  else
  {
    for (int i = 2; i <= std::sqrt(number); i++)
    {
      if (number % i == 0)
      {
        return false;
      }
    }
  }
  return true;
}