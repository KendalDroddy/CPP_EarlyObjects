/*********************************************************************
** Author: Kendal Droddy
**
** Date: April 1, 2017
**
** Challenge: Design a class called Heading that has data members to 
** hold the company name and the report name. A two-parameter default 
** constructor should allow these to be specified at the time a new 
** Heading object is created. If the user creates a Heading object 
** without passing any arguments, "ABC Industries" should be used as 
** a default value for the company name and "Report" should be used 
** as a default for the report name. The class should have member 
** functions to print a heading in either one-line format, as shown 
** here:
**    Pet Pals Payroll Report
** or in four-line format as shown here:
**    *********************************
**              Pet Pals
**            Payroll Report
**    *********************************
** Demonstrate the class by writing a simple program that uses it.
*********************************************************************/
#include <iostream>

class Heading
{
private:
  std::string companyName;
  std::string reportName;
public: 
  //Constructor with no arguments
  Heading() 
  {
    companyName = "ABC Industries";
    reportName = "Report";
  }
  //Constructor with two arguments
  Heading(std::string company, std::string report)
  {
    companyName = company;
    reportName = report;
  }
  //One-line print function
  void oneLine()
  {
    std::cout << companyName << " " << reportName << std::endl;
  }

  //Four-line print function
  void fourLine()
  {
    std::cout << "**********************************" << std::endl;

    //Loop ensures that the company name is centered with the asterisks
    for (int i = 0; i < 17 - (companyName.size()/2); ++i)
    {
      std::cout << " ";
    }
    std::cout << companyName << std::endl;

    //Loop ensures that the report name is centered with the asterisks
    for (int i = 0; i < 17 - (reportName.size()/2); ++i)
    {
      std::cout << " ";
    }
    std::cout << reportName << std::endl;

    std::cout << "**********************************" << std::endl;
  }

};

int main()
{
  //Create class object
  Heading heading1("Buffalo Tour Co.", "Expense Report");
  std::cout << "\n\n";
  
  //Demonstrate single line heading
  heading1.oneLine();
  std::cout << "\n\n";

  //Demonstrate four line heading
  heading1.fourLine();
}