//Program Name:           Population
//Program Description:    Track population growth over a specificed number of days.
//Programmer Name:        Gabrielle Jameson
//Date:                   July 12, 2016

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{

    int days; //number of days the population will increase
    double populationIncrease; //percentage of increase each day
    double populationSize; //starting size of population



    cout << "What is the starting size of the population \n";
    cout << "(Please specify a whole number) \n";

    cin >> populationSize;

    //if the user enters a number less than 2, ask for a number larger than 1
    while(populationSize < 2)
    {
        cout << "\n\nPlease specify a number larger than 1. \n";
        cin >> populationSize;
    }

    cout << "\n\nWhat will the average daily population percentage increase be? \n";
    cout << "(Remember, whole numbers like 100 or 200 are the same as 100% and 200%) \n";

    cin >> populationIncrease;

    //if the user enters a negative percentage, ask for a postive percentage
    while(populationIncrease < 0.0)
    {
        cout << "\n\nPlease specify a non-negative percentage. \n";
        cin >> populationIncrease;
    }

    cout << "\n\nFor how many days will this increase take place? \n";
    cout << "(Please specify a whole number) \n";

    cin >> days;

    //if user enters a number less than 1, ask for a number larger than 0
    while(days < 1)
    {
        cout << "\n\nPlease specify a number larger than zero. \n";
        cin >> days;
    }

    cout << "\n\n";

    cout << setprecision(0) << fixed;

    populationIncrease = populationIncrease / 100;

    for (int count = 1; count <= days; count++)

    {
        cout <<       "------------------------------------------------------\n";
        cout << "Day " << count << endl;
        populationSize = populationSize + (populationIncrease * populationSize); //the final result after the growth
        cout << "Population Size: " << populationSize << endl;
    }

    cout << "\n\n\nNote: Population quantity has been rounded to a whole number.";





    return 0;
}
