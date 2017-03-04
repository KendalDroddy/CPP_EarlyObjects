/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 4, 2017
**
** Challenge: A lottery ticket buyer purchases 10 tickets a week, 
** always playing the same 10 five-digit "lucky" combinations . 
** Write a program that initializes an array with these numbers and 
** then lets the player enter this week's winning five-digit number. 
** The program should perform a linear search through the list of
** the player's numbers and report whether or not one of the tickets
** is a winner this week. Here are the numbers:
** 13579 26791 26792 33445 55555 62483 77777 79422 85647 93121
*********************************************************************/
#include <iostream>

//Function prototype
bool isValid(const int[], int, int);

int main()
{
  //Variables
  int account[10] = {13579, 26791, 26792, 33445, 55555,
                     62483, 77777, 79422, 85647, 93121};
  int winningNumber;

  //Get user input
  std::cout << "\nEnter the winning lottery number: ";
  std::cin >> winningNumber;

  //Search for winningNumber using isValid function
  bool result = isValid(account, 18, winningNumber);

  //Display output to user if winningNumber was found or not
  if (result == true)
  {
    std::cout << "Congratulaions! " << winningNumber << " is a winning number!\n" << std::endl;
  }
  else
    std::cout << "Unfortunately, none of your numbers match " << winningNumber <<".\n" << std::endl;
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