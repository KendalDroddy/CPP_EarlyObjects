/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 4, 2017
**
** Challenge: Write a program that lets the user enter a charge account 
** number. The program should determine if the number is valid by 
** checking for it in the following list:
**    5658845 4520125 8080152 4562555 1005231 6545231
**    7895122 8777541 5552012 5050552 3852085 7576651
**    8451277 7825877 7881200 1302850 1250255 4581002
** Initialize a one-dimensional array with these values. Then use a 
** simple linear search to locate the number entered by the user. 
** If the user enters a number that is in the array, the program 
** should display a message saying the number is valid. If the user 
** enters a number not in the array, the program should display a 
** message indicating it is invalid.
*********************************************************************/
#include <iostream>

//Function prototype
bool isValid(const int[], int, int);

int main()
{
  //Variables
  int account[18] = {5658845, 4520125, 8080152, 4562555, 1005231, 6545231,
                   7895122, 8777541, 5552012, 5050552, 3852085, 7576651,
                   8451277, 7825877, 7881200, 1302850, 1250255, 4581002};
  int choice;

  //Get user input
  std::cout << "\nEnter the account number to search for: ";
  std::cin >> choice;

  //Search for choice using isValid function
  bool result = isValid(account, 18, choice);

  //Display output to user if choice was found or not
  if (result == true)
  {
    std::cout << "The account number " << choice << " is valid.\n" << std::endl;
  }
  else
    std::cout << "The account number " << choice << " is invalid.\n" << std::endl;
}

/*********************************************************************
**                       isValid()
** Accepts parameters of an array, array size, and value to search 
** for. Returns true if value is found and false otherwise.
*********************************************************************/
bool isValid(const int array[], int size, int value)
{
  bool found = false; //Initialize bool to false
  int index = 0;      //Initialize index to 0

  while(index < size && !found)
  {
    if (array[index] == value)
    {
      found = true;
    }
    index++; 
  }
  return found;
}






