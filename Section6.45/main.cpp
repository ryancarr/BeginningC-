/***********************************
 * Name   : Section6.45
 * Author : Ryan
 * Purpose: Calculate square footage of a room using values entered by user.
 ***********************************
 */
#include <iostream>

int main() {
    std::cout << "Please enter the length and width separated by a space: ";
    int length, width;
    std:: cin >> length >> width;

    std::cout << "The area of the room is " << length * width << " square feet." << std::endl;
    return 0;
}