//Program Name:           Inventory Class
//Program Description:    A class that can hold inventory information for a retail store
//Programmer Name:        Gabrielle Jameson
//Date:                   July 18, 2016

#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
     // declare the Inventory object with the default constructor
    Inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;

    }
    Inventory(int newItemNumber, int newQuantity, double newCost)
    {
        itemNumber = newItemNumber;
        quantity = newQuantity;
        cost = newCost;
        setTotalCost(quantity, cost);
    }

    void setItemNumber(int)
    {
        itemNumber = itemNumber;
    }
    void setQuantity(int)
    {
        quantity = quantity;
    }
    void setCost(double)
    {
        cost = cost;
    }
    void setTotalCost(int, double)
    {
        totalCost = quantity * cost;
    }

    int getItemNumber()
    {
        return itemNumber;
    }
    int getQuantity()
    {
        return quantity;
    }
    double getCost()
    {
        return cost;
    }
    double getTotalCost()
    {
        return totalCost;
    }
};

int main()
{
    // declare variables for inventory number, quantity, and cost
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

    // instantiating the Inventory object by using the default constructor
    Inventory();
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }
        // to collect and validate item number, quanity and cost
        cout << "Enter item number: ";
        cin >> itemNumber;
        while (itemNumber < 0)
        {
            cout << "Error. Enter item number (positive): ";
            cin >> itemNumber;
        }
        cout << "Enter item quantity: ";
        cin >> quantity;
        while (quantity < 0)
        {
            cout << "Error. Enter item quantity (positive): ";
            cin >> quantity;
        }
        cout << "Enter item cost: ";
        cin >> cost;
        while (cost < 0)
        {
            cout << "Error: Enter item cost (positive): ";
            cin >> cost;
        }

        Inventory inv(itemNumber, quantity, cost);

        totalCost = inv.getTotalCost();
        itemNumber = inv.getItemNumber();
        quantity = inv.getQuantity();
        cost = inv.getCost();

        // display the contents of Inventory item using getItemNumber(), getQuantity(), and getCost()
        cout<< "Inventory Summary\n";
        cout << "=================\n";
        cout << "Item number:   " << itemNumber << endl;
        cout << "Item quantity: " << quantity << endl;
        cout << "Item cost:     $" << cost << endl;
        cout << "-----------------\n";

        // display the total cost using getTotalCost() function
        cout << "Total Cost:    $" << totalCost << endl;

        return 0;
    }
