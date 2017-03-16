/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 16, 2017
**
** Challenge: Write a program that asks the user to enter two names 
** and stores them in string objects. It should then report whether 
** or not, ignoring case, they are the same. It should use two 
** functions which are described in the comments below.
*********************************************************************/
#include <iostream>

//Function prototypes
std::string upperCaseIt(std::string);
bool sameString (std::string, std::string);

int main()
{
  //Variables
  std::string string1,
              string2;
  bool same;

  //Get user input
  std::cout << "\nEnter two strings to compare.\n";
  std::cout << "String One: ";
  std::cin >> string1;
  std::cout << "String Two: ";
  std::cin >> string2;

  //Compare strings
  same = sameString(string1, string2);

  //Display result
  if (same == true)
  {
    std::cout << "The strings are equal." << std::endl;
  }
  else
  {
    std::cout << "The strings are not equal." << std::endl;
  }
}

/*********************************************************************
**                             upperCaseIt
** Accepts a string parameter and uses a loop to uppercase each
** letter in the string, then return the string to sameString.
*********************************************************************/
std::string upperCaseIt(std::string s)
{
  //Iterate through string uppercasing each letter
  for (int i = 0; i < s.size(); ++i)
  {
    s[i] = toupper(s[i]);
  }
  return s;
}

/*********************************************************************
**                             sameString
** Accepts two string parameters and compares them to see if they are
** equal. Sends the strings to upperCaseIt before making comparison.
*********************************************************************/
bool sameString(std::string s1, std::string s2)
{ 
  //Uppercase both strings
  s1 = upperCaseIt(s1);
  s2 = upperCaseIt(s2);

  //Compare and return result
  if (s1 == s2)
  {
    return true;
  }
  else
  {
    return false;
  }
}