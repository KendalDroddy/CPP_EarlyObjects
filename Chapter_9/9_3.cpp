/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 4, 2017
**
** Challenge: Modify programming challenge 9_2 so that it performs
** a binary search instead of a linear search.
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
  bool result = isValid(account, 10, winningNumber);

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
** for. Performs binary search and returns true if value is found 
** and false otherwise.
*********************************************************************/
bool isValid(const int array[], int size, int value)
{
  bool found = false;  //Initialize bool to false
  int last = size - 1, //Last array element
      middle,          //Midpoint of search
      first = 0;       //First array element

  while(first <= last && !found)
  {
    middle = (first + last) / 2; //Calculate midpoint

    if (array[middle] == value)  //If value is found at mid
    {
      found = true;
    }
    else if (array[middle] > value) // If value is in lower half
    {
      last = middle - 1;
    }
    else  //If value is in upper half                          
    {
      first = middle + 1;
    } 
  }
  return found;
}