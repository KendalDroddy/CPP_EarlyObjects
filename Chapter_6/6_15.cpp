/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 22, 2017
**
** Challenge: The Middletown Wholesale Copper Wire Company sells 
** spools of copper wiring for $100 each and ships them for $10 
** apiece. Write a program that displays the status of an order. It 
** should use two functions which are described in comments below.
*********************************************************************/
#include <iostream>
#include <iomanip>

//Function prototypes
void getData(int &, int &, double &);
void orderStatus(int, int, double);

int main()
{
  //Variables
  int    spools,
         stock;
  double shipping;

  //Get data from user
  getData(spools, stock, shipping);

  //Produce order status
  orderStatus(spools, stock, shipping);

}

/*********************************************************************
**                        getData()
** Function asks for number of spools ordered, number of spools in 
** stock, and any special shipping charges above $10 and stores them
** in reference parameters.
*********************************************************************/
void getData(int &spools, int &stock, double &shipping)
{
  std::cout << "Enter number of spools ordered: ";
  std::cin >> spools;
  std::cout << "Enter number of spools in stock: ";
  std::cin >> stock;
  std::cout << "Enter any special shipping charges above $10: $";
  std::cin >> shipping;
}

/*********************************************************************
**                        orderStatus()
** Function displays number of spools ready to ship from current 
** stock, number of spools on backorder, total price of portion ready
** to ship, total shipping and handling charges on the portion ready
** to ship, and the total of the order ready to ship.
*********************************************************************/
void orderStatus(int spools, int stock, double shipping)
{
  //Calculate spools ready to ship and backorder
  int rdyToShip,
      backorder;
  if (spools <= stock)
  {
    rdyToShip = spools;
    backorder = 0;
  }
  else
  {
    rdyToShip = stock;
    backorder = spools - stock;
  }

  //Caculate price of portion ready to ship, shipping, and total
  double priceReady = rdyToShip * 100,
         totalShipping = shipping + 10,
         orderTotal = priceReady + totalShipping;

  //Display order status
  std::cout <<"\n----------------------------------------\n"
                "*   Middletown Wholesale Order Status  *\n"
                "----------------------------------------" << std::endl;
  std::cout << "Spools ready for shipment:      " << rdyToShip << std::endl;
  std::cout << "Spools on backorder:            " << backorder << std::endl;
  std::cout << "Price of available shipment:   $" << priceReady << std::endl;
  std::cout << "Total shipping price of order: $" << totalShipping << std::endl;
  std::cout << "Total price of order:          $" << orderTotal << std::endl;

}