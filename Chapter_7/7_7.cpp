/*********************************************************************
** Author: Kendal Droddy
**
** Date: April 4, 2017
**
** Challenge: Design an Inventory class that can hold information for 
** an item in a retail store's inventory. The class should have the 
** following private member variables.
**
** Variable Name   Description
** itemNumber      An int that holds the item's number.
** quantity        An int that holds the quantity of the item on hand.
** cost            A double that holds the wholesale cost of the item
** 
** The class should also have a total of nine member functions, each
** of which are described in the comments below.
**
** Demonstrate the class by writing a simple program that uses it. 
** This program should validate the user inputs to ensure that 
** negative values are not accepted for item number, quantity, or cost.
*********************************************************************/
#include <iostream>

class Inventory
{
private:
  int    itemNumber,
         quantity;
  double cost;
public:
  //Default constructor sets all member variables to 0
  Inventory()
  {
    itemNumber = 0;
    quantity = 0;
    cost = 0;
  }

  //Accepts three arguments and calls class functions to copy
  //these values into the appropriate member variables
  Inventory(int i, int q, double c)
  {
    setItemNumber(i);
    setQuantity(q);
    setCost(c);
  }

  /*********************************************************************
  **                      Setter Functions
  *********************************************************************/

  //Accepts an int and copies it into itemNumber member variable
  void setItemNumber(int i)
  {
    itemNumber = i;
  }

  //Accepts an int and copies it into quantity member variable
  void setQuantity(int q)
  {
    quantity = q;
  }

  //Accepts an int and copies it into cost member variable
  void setCost(double c)
  {
    cost = c;
  }

  /*********************************************************************
  **                      Getter Functions
  *********************************************************************/

  //Returns the value in itemNumber
  int getItemNumber()
  {
    return itemNumber;
  }

  //Returns the value in quantity
  int getQuantity()
  {
    return quantity;
  }

  //Returns the value in cost
  int getCost()
  {
    return cost;
  }

  //Computes and returns the total cost
  double getTotalCost()
  {
    return quantity * cost;
  }
};

int main()
{
  //Variables
  int    item,
         quantity;
  double cost;

  //Get user input
  do
  {
    std::cout << "\nEnter the item number: ";
    std::cin >> item;
  }while(item < 0);

  do
  {
    std::cout << "Enter the quantity: ";
    std::cin >> quantity;
  }while(quantity < 0);

  do
  {
    std::cout << "Enter the cost per item: $";
    std::cin >> cost;
  }while(cost < 0);

  //Create class and set member variables
  Inventory inv1(item, quantity, cost);

  //Display inventory values and total cost
  std::cout << "\nInventory Data\n";
  std::cout << "Item Number: " << inv1.getItemNumber() << std::endl;
  std::cout << "Quantity: " << inv1.getQuantity() << std::endl;
  std::cout << "Cost Per Item: $" << inv1.getCost() << std::endl;
  std::cout << "Total Cost: $" << inv1.getTotalCost() << std::endl;
}