/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 2, 2017
**
** Challenge: Write a program that dynamically allocates an array 
** large enough to hold a user-defined number of test scores. Once 
** all the scores are entered, the array should be passed to a 
** function that sorts them in ascending order. Another function 
** should be called that calculates the average score. The program 
** should display the sorted list of scores and averages with 
** appropriate headings. Use pointer notation rather than array 
** notation whenever possible. Input Validation: Do not accept 
** negative numbers for test scores.
*********************************************************************/
#include <iostream>

//Function prototypes
int testAverage(int[], int);

int main()
{
	//Variables
	int arraySize,
	    *pArray;

	//Get array size from user
	std::cout << "How many scores do you need to enter: ";
	std::cin >> arraySize;

	//Allocate memory for array
	pArray = new int[arraySize];

	//Enter scores into array
	for (int i = 0; i < arraySize; ++i)
	{
		//Get score for each index slot and validate
		do
		{
			std::cout << "Enter score for test " << i + 1 << ": ";
			std::cin >> pArray[i];
		}while(pArray[i] < 0);
	}

	int ave = testAverage(pArray, arraySize);
	std::cout << ave << std::endl;
}

/*********************************************************************
**                       testAverage()
** Accepts parameters of an array and array size, and calculates
** the average value of the array.
*********************************************************************/
int testAverage(int *array, int size)
{
	double average,
				 total;

	//Loop through array to calculate average
	for (int i = 0; i < size; i++)
	{
		total += *(array + i);
	}

	average = total / size;
	return average;
}
