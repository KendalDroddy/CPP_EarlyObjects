/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 4, 2017
**
** Challenge: Write a program that has at least 20 integers stored in 
** an array in ascending order. It should call a function that uses 
** the linear search algorithm to locate one of the values. The 
** function should keep a count of the number of comparisons it makes 
** until it finds the value. The program then should call a function 
** that uses the binary search algorithm to locate the same value. 
** It should also keep count of the number of comparisons it makes. 
** Display these two counts on the screen.
*********************************************************************/
#include <iostream>

//Function prototypes
void linearSearch(const int[], int, int);
void binarySearch(const int[], int, int);

int main()
{
  //Variables
  int account[20] = {13579, 14889, 23445, 26791, 26792, 
                     33445, 34668, 37990, 39112, 41657,
                     42000, 46139, 47980, 52534, 55555,
                     62483, 77777, 79422, 85647, 93121};
  int choice;

  //Get user input
  std::cout << "\nEnter the number to search for: ";
  std::cin >> choice;

  //Search for choice using linearSearch and binarySearch functions
  linearSearch(account, 20, choice);
  binarySearch(account, 20, choice);
}

/*********************************************************************
**                       linearSearch()
** Accepts parameters of an array, array size, and value to search 
** for. Returns true if value is found and false otherwise.
*********************************************************************/
void linearSearch(const int array[], int size, int value)
{
  bool found = false; //Initialize bool to false
  int index = 0,      //Initialize index to 0
      count = 0;      //Comparison accumulator

  while(index < size && !found)
  {
    if (array[index] == value)
    {
      found = true;
    }
    index++; 
    count++;
  }
  if (found == true) //Display results
  {
    std::cout << value << " was found. Comparisons made: " << count << std::endl;
  }
  else
    std::cout << value << " was not found. Comparisons made: " << count << std::endl;
}

/*********************************************************************
**                       binarySearch()
** Accepts parameters of an array, array size, and value to search 
** for. Performs binary search and returns true if value is found 
** and false otherwise.
*********************************************************************/
void binarySearch(const int array[], int size, int value)
{
  bool found = false;  //Initialize bool to false
  int last = size - 1, //Last array element
      middle,          //Midpoint of search
      first = 0,       //First array element
      count = 0;       //Comparison accumulator

  while(first <= last && !found)
  {
    middle = (first + last) / 2; //Calculate midpoint
    count++;
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
  if (found == true) //Display results
  {
    std::cout << value << " was found. Comparisons made: " << count << std::endl;
  }
  else
    std::cout << value << " was not found. Comparisons made: " << count << "\n" << std::endl;
}