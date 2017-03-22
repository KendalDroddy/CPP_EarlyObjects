/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 22, 2017
**
** Challenge: Write a program that computes and displays the charges
** for a patient's hospital stay. First, the program should ask if 
** patient was admitted as an outpatient or inpatient. The following
** data should be entered for an inpatient:
**    Number of days in the hospital
**    Daily rate
**    Charges for hospital services
**    Hospital medication charges
** The following should be entered for oupatients:
**    Charges for hospital services
**    Hospital medication charges
** Use a function to validate that no input is < 0.
** Program should use two overloaded functions to calculate the total
** charges.
*********************************************************************/
#include <iostream>

//Function prototypes
double totalCharges(int, double, double, double);
double totalCharges(double, double);
void validateInput(double &);
void validateInput(int &);

int main()
{
  //variables
  int    patient,
         days;
  double rate,
         services,
         medication,
         total;

  //Get user input
  std::cout << "Enter 1 for inpatient or 2 for outpatient: ";
  std::cin >> patient;

  //Switch statement that receives and validates input
  switch(patient)
  {
    case 1: std::cout << "Enter days in hospital: ";
            std::cin >> days;
            validateInput(days);
            std::cout << "Enter daily rate: $";
            std::cin >> rate;
            validateInput(rate);
            std::cout << "Enter charges for hospital services: $";
            std::cin >> services;
            validateInput(services);
            std::cout << "Enter charges for medication: $";
            std::cin >> medication;
            validateInput(medication);
            total = totalCharges(days, rate, services, medication);
            break;
    case 2: std::cout << "Enter charges for hospital services: $";
            std::cin >> services;
            validateInput(services);
            std::cout << "Enter charges for medication: $";
            std::cin >> medication;
            validateInput(medication);
            total = totalCharges(services, medication);
            break;
  }

  //Display billing report
  std::cout <<"\n----------------------------------------\n"
                "*              Billing Report          *\n"
                "----------------------------------------" << std::endl;

  //Switch statement which displays results 
  switch(patient)
  {
    case 1: std::cout << "Days in hospital:        " << days << std::endl;
            std::cout << "Daily hospital rate:    $" << rate << std::endl;
            std::cout << "Charges for services:   $" << services << std::endl;
            std::cout << "Charges for medication: $" << medication << std::endl;
            std::cout << "Total hospital charges: $" << total << std::endl;
            break;
    case 2: std::cout << "Charges for services:   $" << services << std::endl;
            std::cout << "Charges for medication: $" << medication << std::endl;
            std::cout << "Total hospital charges: $" << total << std::endl;
            break;
  }
}

/*********************************************************************
**                     overloaded totalCharges()
** Function asks for the four values needed for an inpatient and
** returns the total charges for their hospital stay.
*********************************************************************/
double totalCharges(int days, double dailyRate, double services, double meds)
{
  return (days * dailyRate) + services + meds;
}

/*********************************************************************
**                     overloaded totalCharges()
** Function asks for the two values needed for an outpatient and 
** returns the total charges for their hospital visit.
*********************************************************************/
double totalCharges(double services, double meds)
{
  return services + meds;
}

/*********************************************************************
**                     overloaded validateInput()
** Checks argument to ensure it is >= 0. If it is not, loops until
** valid input is entered. 
*********************************************************************/
void validateInput(double &value)
{
  while(value < 0)
  {
    std::cout << "Please enter a value greater than zero: ";
    std::cin >> value;
  }
}

/*********************************************************************
**                     overloaded validateInput()
** Checks argument to ensure it is >= 0. If it is not, loops until
** valid input is entered. 
*********************************************************************/
void validateInput(int &value)
{
  while(value < 0)
  {
    std::cout << "Please enter a value greater than zero: ";
    std::cin >> value;
  }
}

