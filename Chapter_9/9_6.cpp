/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 25, 2017
**
** Challenge: Modify the selectionSort function presented in this 
** chapter so it sorts an array of strings instead of an array of 
** ints. Test the function with a driver program.  
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

//Function prototype
void selectionSort(std::string [], int);
void showArray(const std::string [], int);

int main()
{
   const int SIZE = 20;
   
   std::string name[SIZE] = 
   {"Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
    "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill", 
    "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
    "Moretti, Bella", "Wu, Hong",     "Patel, Renee",   "Harrison, Rose",
    "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth"};
  
  //Sort array
  selectionSort(name, SIZE);

  //Display sorted array
  showArray(name, SIZE);
}

/**************************************************************
 **                      selectionSort                       
 ** This function performs an ascending-order selection sort   
 ** on array. The parameter size holds the number of elements  
 ** in the array.                                              
 **************************************************************/
void selectionSort(std::string array[], int size)
{
  int startScan, minIndex;
  std::string minValue;

  for (startScan = 0; startScan < (size - 1); startScan++)
  {
    minIndex = startScan;
    minValue = array[startScan];
    for(int index = startScan + 1; index < size; index++)
    {
      if (array[index] < minValue)
      {
        minValue = array[index];
        minIndex = index;
      }
      }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
  }
}
/*************************************************************
 *                        showArray                          *
 * This function displays the contents of array. The         *
 * parameter size holds the number of elements in the array. *
 *************************************************************/
void showArray(const std::string array[], int size)
{
  for (int count = 0; count < size; count++)
  {
    std::cout << std::setw(2) << count + 1 <<". " << array[count] << std::endl;
  }
}