//Program Name:           Star Search
//Program Description:    A way to determine a performers average score
//Programmer Name:        Gabrielle Jameson
//Date:                   July 18, 2016


#include<iostream>
#include<cmath>
using namespace std;

// function protoype to define and call the function
void getNumberOfPerformers(int);
void getJudgeData(double);
void calScore(double,double,double,double,double,double);
double findLowest(double,double,double,double,double);
double findHighest(double,double,double,double,double);


int main()
 {

  // local variables declared here
  int numPerformers;   // Get number of performers
  double judgeOne, judgeTwo, judgeThree, judgeFour, judgeFive ,avgScr; // Judges


  getNumberOfPerformers(numPerformers);

  for( int i = 0; i < numPerformers; i++ )
  {
  // Get Data From Judge 1
  getJudgeData(judgeOne);
  // Get Data From Judge 2
  getJudgeData(judgeTwo);
  // Get Data From Judge 3
  getJudgeData(judgeThree);
  // Get Data From Judge 4
  getJudgeData(judgeFour);
  // Get Data From Judge 5
  getJudgeData(judgeFive);

  // Calculate Score
  calScore(judgeOne, judgeTwo, judgeThree, judgeFour, judgeFive , avgScr);
  cout<< " Average Score For Performers " << ( i + 1 ) << " is " << avgScr << " points " << endl;

  }

  return 0;

  }

void getNumberOfPerformers(int input)
{
  cout << "Please enter total number of performers ";
  cin >> input;
}

void getJudgeData(double s)
 {
  // validation to ensure score is between 0 & 10
  do
    {


      cout << " Enter Score between '0' and '10' from judge "<< "  ";
      cin >> score;

    } while (( score > 10 )||( score < 0 ));
 }

// calculates the average of three scores that remain

void calScore(double avgScore, double s1, double s2, double s3, double s4, double s5)

 {

  double lowest,highest,dropScore,totalScore;
  totalScore = s1 + s2 + s3 + s4 + s5;

  // Find lowest
  lowest = findLowest(s1, s2, s3, s4, s5);
  // Find highest
  highest = findHighest(s1, s2, s3, s4, s5);
  dropScore = totalScore - (lowest + highest);

  avgScore = dropScore / 3;




 }

// find the lowest score
double findLowest(double a, double b, double c, double d, double e)
  {
     if((a < b) && (a < c) && (a < d) && (a < e))
     {
      return a;
     }
    else if((b < a) && (b < c) && (b < d) && (b < e))
    {
     return b;
    }
    else if((c < a) && (c < b) && (c < d) && (c < e))
    {
     return c;
    }
   else if((d < a) && (d < b) && (d < c) && (d < e))
   {
    return d;
   }
   else
   {
    return e;
   }
 }




// find the highest score

double findHighest(double a,double b,double c,double d,double e)
{
   if((a > b) && (a > c) && (a > d) && (a > e))
   {
    return a;
   }
  else if((b > a) && (b > c) && (b > d) && (b > e))
  {
   return b;
  }
  else if((c > a) && (c > b) && (c > d) && (c > e))
  {
   return c;
  }
 else if((d > a) && (d > b) && (d > c) && (d > e))
 {
  return d;
 }
 else
 {
  return e;
 }
}
