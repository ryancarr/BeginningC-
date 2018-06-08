/************************************
 * Name    : Section6.51
 * Author  : Ryan
 * Purpose : Simulate a carpet cleaning service and provide a service estimate
 ************************************/
#include <iostream>
using namespace std;

int main()
{
    const double large_room_price {35.0};
    const double small_room_price {25.0};
    const double tax_rate {6.0};
    const int valid_period {30}; // In days

    cout << "Welcome to Ryan's Carpet Cleaning Service " << endl;
    cout << "------------------------------------------" << endl;
    cout << "How many large rooms do you need cleaned: ";
    int number_of_large {0};
    cin >> number_of_large;

    cout << "How many small rooms do you need cleaned: ";
    int number_of_small {0};
    cin >> number_of_small;

    cout << "------------------------------------------" << endl;

    cout << "Price per large room: $" << large_room_price << endl;
    cout << "Price per small room: $" << small_room_price << endl;

    double subtotal = (large_room_price * number_of_large) +
                      (small_room_price * number_of_small);

    cout << "Subtotal:\t          $" << subtotal << endl;

    double tax_due = subtotal * (tax_rate / 100); // Convert tax to percentage
    cout << "Tax Due:\t          $" << tax_due << endl;
    cout << "------------------------------------------" << endl;
    double total = subtotal + tax_due;
    cout << "Total:\t\t          $" << total << endl;

    cout << "This estimate is valid for " << valid_period
         << " days." << endl;

    return 0;
}