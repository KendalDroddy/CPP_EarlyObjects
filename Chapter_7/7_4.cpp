/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 15, 2017
**
** Challenge: Create a class Car with year, make, and speed member 
** variables. The class should contain the following member functions:
** Constructor   ** Accessors  ** accelerate   **brake
** These functions are defined in the comments below. Demonstrate the 
** class in a program that creates a Car object and then calls the 
** accelerate function five times. After each call to the accelerate 
** function, get the current speed of the car and display it. Then, 
** call the brake function five times. After each call to the brake 
** function, get the current speed of the car and display it.
*********************************************************************/
#include <iostream>

class Car
{
private:
  int year;
  std::string make;
  int speed;
public:
/*********************************************************************
** Constructor: Accept the car's year and make as arguments and assign 
** these values to the object's year and make member variables. The 
** constructor should initialize the speed member variable to 0.
*********************************************************************/
  Car(int yr, std::string mk)
  {
    year = yr;
    make = mk;
    speed = 0;
  }
/*********************************************************************
** Accessors: Appropriate accessor functions shou ld be created to 
** allow values to be retrieved from an object's year, make, and 
** speed member variables.
*********************************************************************/
int getYear()
{
  return year;
}
std::string getMake()
{
  return make;
}
int getSpeed()
{
  return speed;
}
/*********************************************************************
** accelerate(): The accelerate function should add 5 to the speed 
** member variable each time it is called.
*********************************************************************/
void accelerate()
{
  speed += 5;
}
/*********************************************************************
** brake(): The brake function should subtract 5 to the speed 
** member variable each time it is called.
*********************************************************************/
void brake()
{
  speed -= 5;
}
};

/*********************************************************************
** main
*********************************************************************/
int main()
{
  //Create car object
  Car car(2016, "Civic");

  //Accelerate five times. Print speed after each acceleration.
  std::cout << "Accelerating..." << std::endl;
  for (int i = 0; i < 5; ++i)
  {
    car.accelerate();
    std::cout << "Speed: " << car.getSpeed() << std::endl;
  }

  //Brake five times. Print speed after each acceleration.
  std::cout << "Braking..." << std::endl;
  for (int i = 0; i < 5; ++i)
  {
    car.brake();
    std::cout << "Speed: " << car.getSpeed() << std::endl;
  }
}