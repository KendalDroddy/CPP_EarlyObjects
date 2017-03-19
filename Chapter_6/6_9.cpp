/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 19, 2017
**
** Challenge: A particular talent competition has five judges, each of 
** whom awards a score between 0 and 10 to each performer. Fractional 
** scores, such as 8.3, are allowed. A performer's final score is 
** determined by dropping the highest and lowest score received, then 
** averaging the three remaining scores. Write a program that uses 
** these rules to calculate and display a contestant's score. Use the
** four functions which are defined in the comments.
*********************************************************************/
#include <iostream>

//Function prototypes
void getJudgeData(double &);
double calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main()
{
	//Variables
	double scoreOne,
				 scoreTwo,
				 scoreThree,
				 scoreFour,
				 scoreFive,
				 scoreAverage;

	//Get input from five judges
	std::cout << "Enter the scores for the five judges." << std::endl;
	getJudgeData(scoreOne);
	getJudgeData(scoreTwo);
	getJudgeData(scoreThree);
	getJudgeData(scoreFour);
	getJudgeData(scoreFive);

	//Get average score and display result
	scoreAverage = calcScore(scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive);
	std::cout << "The average score is: " << scoreAverage << std::endl;


}

/*********************************************************************
**                           getJudgeData
** Function should ask the user for a judge's score, store it in a 
** reference parameter variable, and validate it. This function 
** should be called by main once for each of the five judges.
*********************************************************************/
void getJudgeData(double &score)
{
	do
	{
		std::cout << "Score: ";
		std::cin >> score;
		if (score < 0 || score > 10)
		{
			std::cout << "Score must be between 0 and 10." << std::endl;
		}
	}while(score < 0 || score > 10);
}

/*********************************************************************
**                           calcScore
** Function should calculate and return the average of the three
** scores that remain after dropping the highest and lowest scores.
*********************************************************************/
double calcScore(double score1, double score2, double score3, double score4, double score5)
{
	double lowest,
	       highest,
	       average;

	//Find lowest
	lowest = findLowest(score1, score2, score3, score4, score5);

	//Find highest
	highest = findHighest(score1, score2, score3, score4, score5);
	
	//Calculate average
	average = (score1 + score2 + score3 + score4 + score5 - highest - lowest) / 3;

	return average;
}


/*********************************************************************
**                           findLowest
** Find and return the lowest of the five scores passed to it.
*********************************************************************/
double findLowest(double score1, double score2, double score3, double score4, double score5)
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

/*********************************************************************
**                           findHighest
** Find and return the highest of the five scores passed to it.
*********************************************************************/
double findHighest(double score1, double score2, double score3, double score4, double score5)
{
	//Compare and return low score
  if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
  {
    return score1;
  }
  else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
  {
    return score2;
  }
  else if (score3 > score2 && score3 > score1 && score3 > score4 && score3 > score5)
  {
    return score3;
  }
  else if (score4 > score2 && score4 > score3 && score4 > score1 && score4 > score5)
  {
    return score4;
  }
  else
  {
    return score5;  
  }
}








