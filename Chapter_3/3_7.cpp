/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 9, 2017
**
** Challenge: Write a program that calculates the average monthly
** rainfall for three months. The program should ask the user to 
** enter the name of each month and the amount of rain that fell
** that month. The program should display the results.
*********************************************************************/
#include <iostream>
#include <iomanip>
using std::cin;
using std::endl;

int main()
{
	//Initialize variables
	std::string month1,
		   month2,
		   month3;
    double rain1,
           rain2,
           rain3,
           average;

    //Get user input
    std::cout << "List three months: " << endl;
    cin >> month1 >> month2 >> month3;
    std::cout << "Enter the inches of rainfall for " << month1 << ": ";
    cin >> rain1;
    std::cout << "Enter the inches of rainfall for " << month2 << ": ";
    cin >> rain2;
    std::cout << "Enter the inches of rainfall for " << month3 << ": ";
    cin >> rain2;

    //Calculate and display results
    average = (rain1 + rain2 + rain3) / 3;
    std::cout << "The average monthly rainfall for " << month1 << ", ";
    std::cout << month2 << ", and " << month3 << " was ";
    std::cout << std::setprecision(2) << std::fixed << average << " inches." << endl;
}