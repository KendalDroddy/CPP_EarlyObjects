/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 22, 2017
**
** Challenge: Modify challenge 6_16 so that it writes the report it
** creates to a file.
*********************************************************************/
#include <iostream>
#include <fstream>

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
  std::ofstream outputFile;

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

  //Write billing report to a file
  outputFile.open("hospitalReport.txt");
  outputFile << "----------------------------------------\n"
                "*              Billing Report          *\n"
                "----------------------------------------" << std::endl;

  //Switch statement which displays results 
  switch(patient)
  {
    case 1: outputFile << "Days in hospital:        " << days << std::endl;
            outputFile << "Daily hospital rate:    $" << rate << std::endl;
            outputFile << "Charges for services:   $" << services << std::endl;
            outputFile << "Charges for medication: $" << medication << std::endl;
            outputFile << "Total hospital charges: $" << total << std::endl;
            break;
    case 2: outputFile << "Charges for services:   $" << services << std::endl;
            outputFile << "Charges for medication: $" << medication << std::endl;
            outputFile << "Total hospital charges: $" << total << std::endl;
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

