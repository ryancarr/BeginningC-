/************************************
 * Name    : Section6.50
 * Author  : Ryan
 * Purpose : Simulate a carpet cleaning service and provide user with a service estimate
 ************************************/
#include <iostream>
using namespace std;

int main()
{
    const int price_per_room {30};
    const float tax_rate {6.5};
    const int valid_period {30};

    cout << "Welcome to Ryan's Carpet Cleaning Service" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "How many rooms do you need cleaned: ";
    int number_of_rooms {0};
    cin >> number_of_rooms;

    cout << "Price per room: $" << price_per_room << endl;
    int subtotal = price_per_room * number_of_rooms;
    cout << "Subtotal:       $" << subtotal << endl;

    float tax_due = subtotal * (tax_rate / 100);
    cout << "Tax Due:        $" << tax_due << endl;
    cout << "-----------------------------------------" << endl;
    float total = subtotal + tax_due;
    cout << "Total:          $" << total << endl;

    cout << "This estimate is valid for " << valid_period << " days." << endl;


    return 0;
}