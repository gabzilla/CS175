//Program Name:           Using Files - Total and Average Rainfall
//Program Description:    Program will find total and average rainfall for months in text file.
//Programmer Name:        Gabrielle Jameson
//Date:                   July 12, 2016

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{

  string begMonth,
         endMonth;
  ifstream inputFile;
  double monthlyRain,
         averageRainfall = 0.0,
         totalRainfall = 0.0;
  int months = 0;

  //open file
  inputFile.open("Rainfall.txt");
  inputFile >> begMonth;
  inputFile >> endMonth;

  //read value from file
  //loop through the monthly rain value
  if (inputFile)
  {

  while (inputFile >> monthlyRain)

  {

    //add the monthly rainfall to total
    totalRainfall += monthlyRain;
    months++;

  }

    //close the File
    inputFile.close();

  }

  // if file cannot be opened show error message
  else
  {

    //Display an error message
    cout << "Error opening the file.\n";
    exit(EXIT_FAILURE); // status code to indicate failure

  }

    // find average rainfall and print out results
    averageRainfall = (totalRainfall / months);

    cout << "\nDuring the months of " << begMonth << "-" << endMonth << " the total rainfall was: " << totalRainfall
    << " inches and the average monthly rainfall was " << averageRainfall << " inches.\n" << endl;
    
  return 0;

}
