/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 9, 2017
**
** Challenge: Write a program that asks for five test scores. The 
** program should calculate the average test score and display it. 
** The number displayed should be formatted in fixed-point notation,
** with one decimal point of precision.
*********************************************************************/
#include <iostream> 
#include <iomanip>
using std::cout;
using std::cin;

int main()
{
	//Initialize variables
	double score1,
	       score2,
	       score3,
	       score4,
	       score5,
	       average;

	//Get user input
	cout << "Please enter five test score: ";
	cin >> score1 >> score2 >> score3 >> score4 >> score5;

	//Calculate and display results
	average = (score1 + score2 + score3 + score4 + score5) / 5;
	cout << "Average score: " << std::setprecision(1) << std::fixed << average << std::endl;

}