//Program Name:           Box Office
//Program Description:    Program will calculate total amount of tickets, gross profit, net profit and amount paid
//                        to distribution for a box office.
//Programmer Name:        Gabrielle Jameson
//Date:                   June 25, 2016


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double adultTicketCost = 6.00,
                 childTicketCost = 3.00;
    string  movie;
    int     numberOfadultTickets,
            numberOfchildTickets;
    double  boxOfficeProfits,
            distributor,
            totalProfitAdultTickets,
            totalProfitChildTickets,
            grossProfit,
            netProfit;

    // collects user input
    cout << "Please enter movie name: ";
    getline( cin, movie );
    cout << "Please enter total number of adult tickets sold: ";
    cin >> numberOfadultTickets;
    cout << "Please enter total number of child tickets sold: ";
    cin >> numberOfchildTickets;


    // calculates total profits of adult and childern tickets
    totalProfitAdultTickets = numberOfadultTickets * adultTicketCost;
    totalProfitChildTickets = numberOfchildTickets * childTicketCost;


    // assumes that theater gets 20% of gross profit
    grossProfit = totalProfitAdultTickets + totalProfitChildTickets;
    netProfit = grossProfit * 0.2;
    distributor = grossProfit - netProfit;

    // fixed: overrides scientic notation
    cout << fixed << showpoint << setprecision(2);
    cout << "Movie Name: "  << setw(19) << "\"" << movie << "\"" << endl;
    cout << "Adult Ticket Sold: " << setw(15)  << numberOfadultTickets << endl;
    cout << "Child Ticket Sold: " << setw(15) << numberOfchildTickets << endl;
    cout << "Gross Box Office Profit: " << setw(8) << "$ " << grossProfit << endl;
    cout << "Amount Paid to Distributor: " << setw(5) << "-$ " << distributor << endl;
    cout << "Net Box Office Profit: " << setw(10) << "$ " << netProfit << endl;

    return 0;
}
