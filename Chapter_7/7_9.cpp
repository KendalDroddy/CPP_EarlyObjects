/*********************************************************************
** Author: Kendal Droddy
**
** Date: April 6, 2017
**
** Challenge: Modify the Movie Data program written for Programming 
** Challenge 8 to include two more members that hold the movie's 
** production costs and first-year revenues. The constructor should 
** be modified so that all six member values can be specified when a 
** MovieData variable is created. Modify the function that displays 
** the movie data to display the title, director, release year, 
** running time, and first year's profit or loss. Also, improve the 
** program by having the MovieDatavariables passed to the display 
** function as constant references.
*********************************************************************/
#include <iostream>

//Structure definition
struct MovieData
{
  std::string title,
              director;
  int    year,
         runTime;
  double cost,
         revenue;
      
  //Constructor
  MovieData(std::string t, std::string d, int y, int r, double c, double f)
  {
    title = t;
    director = d;
    year = y;
    runTime = r;
    cost = c;
    revenue = f;
  }
};

//Function prototype
void printData(MovieData const &);

int main()
{
  //Create MovieData objects
  MovieData movie1("Kill Bill", "Quentin Tarantino", 2003, 112, 30.0, 70.1);
  MovieData movie2("Interstellar", "Christopher Nolan", 2014, 179, 165.0, 675.1);

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
void printData(MovieData const &movie)
{
  std::cout << "Movie: " << movie.title << std::endl;
  std::cout << "Director: " << movie.director << std::endl;
  std::cout << "Year: " << movie.year << std::endl;
  std::cout << "Run Time: " << movie.runTime << " minutes" << std::endl;
  std::cout << "Profit: $" << movie.revenue - movie.cost << " (millions)" << std::endl;
}