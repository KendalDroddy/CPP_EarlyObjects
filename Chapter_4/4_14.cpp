/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 19, 2017
**
** Challenge: Write a program that asks for the name of a pole 
** vaulter and the dates and vault heights (in meters) of the 
** athlete's three best vaults. It should then report in height order
** (best first), the date on which each vault was made, and its height.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
  std::string name,
              date1,
              date2,
              date3;
  double      vault1,
              vault2,
              vault3;

  //Get user input
  std::cout << "Enter the name of the pole vaulter: ";
  std::getline(std::cin, name);

  std::cout << "Type the date of the first vault: ";
  std::getline(std::cin, date1);
  std::cout << "Enter the height of this vault: ";
  std::cin >> vault1;

  std::cout << "Type the date of the second vault: ";
  std::getline(std::cin, date2);
  std::cout << "Enter the height of this vault: ";
  std::cin >> vault2;

  std::cout << "Type the date of the third vault: ";
  std::getline(std::cin, date3);
  std::cout << "Enter the height of this vault: ";
  std::cin >> vault3;

  //Compare vaults and display results in descending order by height
  if (vault1 > vault2 && vault1 > vault3)
  {
    std::cout << "1. " << date1 << ": " << vault1 << std::endl;
    if (vault2 > vault3)
    {
      std::cout << "2. " << date2 << ": " << vault2 << std::endl;
      std::cout << "3. " << date3 << ": " << vault3 << std::endl;
    }
    else
    {
      std::cout << "2. " << date3 << ": " << vault3 << std::endl;
      std::cout << "3. " << date2 << ": " << vault2 << std::endl;
    }
  }
  if (vault2 > vault1 && vault2 > vault3)
  {
    std::cout << "1. " << date2 << ": " << vault2 << std::endl;
    if (vault1 > vault3)
    {
      std::cout << "2. " << date1 << ": " << vault1 << std::endl;
      std::cout << "3. " << date3 << ": " << vault3 << std::endl;
    }
    else
    {
      std::cout << "2. " << date3 << ": " << vault3 << std::endl;
      std::cout << "3. " << date1 << ": " << vault1 << std::endl;
    }
  }
  if (vault3 > vault2 && vault3 > vault1)
  {
    std::cout << "1. " << date3 << ": " << vault3 << std::endl;
    if (vault2 > vault1)
    {
      std::cout << "2. " << date2 << ": " << vault2 << std::endl;
      std::cout << "3. " << date1 << ": " << vault1 << std::endl;
    }
    else
    {
      std::cout << "2. " << date1 << ": " << vault1 << std::endl;
      std::cout << "3. " << date2 << ": " << vault2 << std::endl;
    }
  }





































}