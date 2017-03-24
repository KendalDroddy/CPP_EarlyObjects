/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 24, 2017
**
** Challenge: Write a modular program that analyzes a year's worth of 
** rainfall data. In addition to main, the program should have a 
** getData function that accepts the total rainfall for each of 12 
** months from the user and stores it in a double array. It should 
** also have four value-returning functions that compute and return 
** to main the total Rainfall, averageRainfall , driestMonth, and 
** wettestMonth. These last two functions return the number of the 
** month with the lowest and highest rainfall amounts, not the amount 
** of rain that fell those months. Notice that this month number can 
** be used to obtain the amount of rain that fell those months. 
** Display the results in a formatted rainfall report. 
*********************************************************************/
#include <iostream>

//Function prototypes
void getData(double []);
double totalRainfall(double []);
double averageRainfall(double);
int wettestMonth(double []);
int driestMonth(double []);

int main()
{ 
  //Variable
  double rainfall[12],
         totalRain,
         averageRain,
         dryMonth,
         wetMonth;

  //Get rainfall data
  getData(rainfall);

  //Get total rainfall for the 12 months
  totalRain = totalRainfall(rainfall);

  //Get average rainfall for the 12 months
  averageRain = averageRainfall(totalRain);

  //Get wettest and driest months out of the 12
  dryMonth = driestMonth(rainfall);
  wetMonth = wettestMonth(rainfall);

  //Result header
  std::cout <<"\n----------------------------------------------------\n"
                "*                   2017 Rain Report               *\n"
                "----------------------------------------------------" << std::endl;
  std::cout << "          Total Rainfall:     " << totalRain << " inches" << std::endl;
  std::cout << "        Average Rainfall:     " << averageRain << " inches" << std::endl;
  std::cout << "Least Rain Fell In Month:     " << dryMonth << std::endl;
  std::cout << " Most Rain Fell In Month:     " << wetMonth << std::endl;


}

/*********************************************************************
**                        getData()
** Accepts an array of doubles holding 12 values. Gets user input for
** each of the 12 values and stores them in the array.
*********************************************************************/
void getData(double array[12])
{
  for (int i = 0; i < 12; ++i)
  {
    double rain;
    std::cout << "Enter rainfall for month " << i + 1 << ": ";
    std::cin >> rain;
    array[i] = rain;
  }
}
/*********************************************************************
**                        totalRainfall()
** Accepts an array of doubles and returns the sum of the array.
*********************************************************************/
double totalRainfall(double array[12])
{
  double total;
  for (int i = 0; i < 12; ++i)
  {
    total += array[i];
  }
  return total;
}
/*********************************************************************
**                        averageRainfall()
** Accepts the total rainfall as argument, divides it by 12 and 
** returns the result.
*********************************************************************/
double averageRainfall(double t)
{
  return t / 12;
}
/*********************************************************************
**                        wettestMonth()
** Accepts an array of doubles and returns the smallest value.
*********************************************************************/
int wettestMonth(double array[12])
{
  double wettest = array[0];
  int index = 0;
  for (int i = 0; i < 12; ++i)
  {
    if (array[i] > wettest)
    {
      wettest = array[i];
      index = i;
    }
  }
  return index + 1;
}
/*********************************************************************
**                        driestMonth()
** Accepts an array of doubles and returns the largest value.
*********************************************************************/
int driestMonth(double array[12])
{
  double driest = array[0];
  int index = 0;
  for (int i = 0; i < 12; ++i)
  {
    if (array[i] < driest)
    {
      driest = array[i];
      index = i;
    }
  }
  return index + 1;
}