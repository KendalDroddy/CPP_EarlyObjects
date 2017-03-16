/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 16, 2017
**
** Challenge: Write a program that calculates the average of a group
** of test scores, where the lowest score in the group is dropped.
** Use three functions which are defined in the comments below.
*********************************************************************/
#include <iostream>

//Function prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
  //Variables
  int score1,
      score2, 
      score3,
      score4,
      score5;

  //Get user input
  std::cout << "Enter five test scores between 0 and 100." << std::endl;
  getScore(score1);
  getScore(score2);
  getScore(score3);
  getScore(score4);
  getScore(score5);

  //Pass the scores to calcAverage
  calcAverage(score1, score2, score3, score4, score5);
}

/*********************************************************************
**                           getScore
** This function should ask the user for a test score, store it in a
** reference parameter variable, and validate that it is not lower
** than 0 or higher than 100. Function should be called in main once
** for each of the five scores to be entered.
*********************************************************************/
void getScore(int &score)
{
  //Use loop to validate score input
  do
  {
    std::cout << "Score: ";
    std::cin >> score;
  }while(score < 0 || score > 100);
}


/*********************************************************************
**                           calcAverage
** Calcuate and display the average of the four highest scores of
** the five scores passed to it.
*********************************************************************/
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
  //Find lowest score
  int lowest = findLowest(score1, score2, score3, score4, score5);

  //Calculate average by adding all five values, subtracting lowest, divide by 4
  int average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4;

  //Display result
  std::cout << "The average after dropping the lowest score is: " << average << std::endl;
}


/*********************************************************************
**                           findLowest
** Finds and returns the lowest of the five scores passed to it.
*********************************************************************/
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
  //Compare and return low score
  if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
  {
    return score1;
  }
  else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
  {
    return score2;
  }
  else if (score3 < score2 && score3 < score1 && score3 < score4 && score3 < score5)
  {
    return score3;
  }
  else if (score4 < score2 && score4 < score3 && score4 < score1 && score4 < score5)
  {
    return score4;
  }
  else
  {
    return score5;  
  }
}