/***********************************
 * Name   : Section6.45
 * Author : Ryan
 * Purpose: Calculate square footage of a room using values entered by user.
 ***********************************
 */
#include <iostream>
using namespace std;

int main()
{
    int room_width {0};
    cout << "Enter the width of the room: ";
    cin >> room_width;

    int room_length {0};
    cout << "Enter the length of the room: ";
    cin >> room_length;

    int area = room_length * room_width;

    std::cout << "The area of the room is " << area << " square feet." << std::endl;
    return 0;
}