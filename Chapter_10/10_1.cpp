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
#include <algorithm>

//Function prototypes
int testAverage(int *test, int);

void sortArray(int *test, int);

int main()
{
	//Variables
	int arraySize,
	    *pArray = nullptr;

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

	//Sort values in array and display sorted values
	sortArray(pArray, arraySize);

	//Get test average and display results
	int ave = testAverage(pArray, arraySize);
	std::cout << "Average Score: " << ave << std::endl;

	//Deallocate memory
	delete [] pArray;
	pArray = nullptr;
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

/*********************************************************************
**                       testSort()
** Accepts parameters of an array and array size, and sorts in
** ascending order.
*********************************************************************/
void sortArray(int *array, int size)
{	
	std::sort(array, array + size);
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Score " << i + 1 << ": ";
		std::cout << array[i] << std::endl;
	}
}