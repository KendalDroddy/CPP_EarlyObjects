/*********************************************************************
** Author: Kendal Droddy
**
** Date: April 5, 2017
**
** Challenge: Write a program that uses a structure named MovieData to 
** store the following information about a movie:
**    Title
**    Director
**    Year Released
**    Running time (in minutes)
** Include a constructor that allows all four of these member data 
** values to be specified at the time a MovieData variable is 
** created.The program should create two MovieData variables and pass 
** each one in turn to a function that displays the information about 
** the movie in a clearly formatted manner. Pass the MovieData 
** variables to the display function by value.
*********************************************************************/
#include <iostream>

//Structure definition
struct MovieData
{
  std::string title,
              director;
  int year,
      runTime;
      
  //Constructor
  MovieData(std::string t, std::string d, int y, int r)
  {
    title = t;
    director = d;
    year = y;
    runTime = r;
  }
};

//Function prototype
void printData(MovieData);

int main()
{
  //Create MovieData objects
  MovieData movie1("Kill Bill", "Quentin Tarantino", 2003, 112);
  MovieData movie2("Interstellar", "Christopher Nolan", 2014, 179);

  //Print MovieData member variables
  printData(movie1);
  std::cout << "\n";
  printData(movie2);
}

/*********************************************************************
**                          printData
** Accepts a MovieData object as a parameter and prints the member
** variables of the object.
*********************************************************************/
void printData(MovieData movie)
{
  std::cout << "Movie: " << movie.title << std::endl;
  std::cout << "Director: " << movie.director << std::endl;
  std::cout << "Year: " << movie.year << std::endl;
  std::cout << "Run Time: " << movie.runTime << " minutes" << std::endl;
}