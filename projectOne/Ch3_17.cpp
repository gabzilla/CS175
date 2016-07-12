//Program Name:           Interest Earned
//Program Description:    Program will calculate balance in savings account with interest included
//Programmer Name:        Gabrielle Jameson
//Date:                   June 26, 2016


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double principal,
           interestRate,
           compoundAmount,
           amount;

    // collects user input
    cout << "What is your savings account balance?: " << endl;
    cin >> principal;
    cout << "What is your annual interest rate? (in %): " << endl;
    cin >> interestRate;
    cout << "How many times has your interest been compounded?: " << endl;
    cin >> compoundAmount;

    // calculates interest rate and total amount in savings after interest
    interestRate /= 100;
    amount = 1 + (interestRate/compoundAmount);
    amount = principal * pow(amount, compoundAmount);

    // sets decimal points and disables scientific notation
    cout << fixed << showpoint << setprecision(2);
    cout << "Interest Rate (%): " << setw(15) << interestRate * 100 << "%" << endl;
    cout << "Times Compounded: " << setw(16) << compoundAmount << endl;
    cout << "Principal: " << setw(23) << principal << endl;
    cout << "Interest: " << setw(24) << amount - principal << endl;
    cout << "Amount: " << setw(26) << amount << endl;


    return 0;
}
