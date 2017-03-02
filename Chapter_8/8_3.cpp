/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 2, 2017
**
** Challenge: Write a program that displays the Roman numeral 
** equivalent of any decimal number between 1 and 20 that the user 
** enters. The Roman numerals should be stored in an array of strings, 
** and the decimal number that the user enters should be used to 
** locate the array element holding the Roman numeral equivalent. 
** The program should have a loop that allows the user to continue 
** entering numbers until an end sentinel of O is entered.
*********************************************************************/
#include <iostream>
using std::string;

//Function prototype
void romanNumeral(const string[], int);

int main()
{
  //String array holds Roman numerals
  string numerals[20] = {"I", "II", "III", "IV", "V",
                         "VI", "VII", "VIII", "IX", "X",
                         "XI", "XII", "XIII", "XIV", "XV",
                         "XVI", "XVII", "XVIII", "XIX", "XX"};
  //Choice variable
  int choice;

  //Get user input
  std::cout << "Enter a number between 1 and 20 to see it's Roman\n"
            << "numeral equivalent or enter 0 to exit the program." << std::endl;
  
  do //Input validation
  {
    std::cout << "Enter number : ";
    std::cin >> choice;
  }while(choice < 0 || choice > 20);

  while(choice != 0)
  {
    std::cout << "Roman numeral: ";
    romanNumeral(numerals, choice);

    do //Input validation
    {
      std::cout << "Enter number : ";
      std::cin >> choice;
    }while(choice < 0 || choice > 20);
  }
}

/************************************************************
 **                  romanNumeral()                          
 ** Accepts a const array and int n. Displays
 ** Roman numeral corresponding to n.
 ************************************************************/
 void romanNumeral(const string roman[], int choice)
 {
  std::cout << roman[choice - 1] << std::endl;
 }
