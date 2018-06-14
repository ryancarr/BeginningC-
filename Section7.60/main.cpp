/**********************************************
 * Name    : Section7.60
 * Author  : Ryan
 * Purpose : Further develop skills using vectors
 **********************************************/
 /*
  * DONE: Create two vectors containing int, name one vector1 and the other vector2
  * DONE: Dynamically add 10 and 20 to vector1
  * DONE: Use vector notation to output the values in vector1

  * DONE: Dynamically add 100 and 200 to vector2
  * DONE: Use vector notation to output the values in vector2

  * DONE: Declare empty 2D vector called vector_2d, vector should contain integers
  * DONE: Dynamically add vector1 to vector_2d
  * DONE: Dynamically add vector2 to vector_2d
  * DONE: Display elements in vector_2d

  * DONE: Change value of vector1 index 0 to 1000

  * DONE: Display elements in vector1
  * DONE: Display elements in vector_2d
  */
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector <int> vector1 {};

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Elements in vector #1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "---------------------" << endl;

    vector <int> vector2 {};

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Elements in vector #2" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "---------------------" << endl;

    vector <vector<int>> vector_2d {};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements in 2D Vector" << endl;
    cout << vector_2d.at(0).at(0) << " ";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " ";
    cout << vector_2d.at(1).at(1) << endl;
    cout << "---------------------" << endl;

    vector1.at(0) = 1000;
    cout << "Changed value in Vector #1" << endl;
    cout << "---------------------" << endl;

    cout << "Elements in vector #1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "---------------------" << endl;

    cout << "Elements in 2D Vector" << endl;
    cout << vector_2d.at(0).at(0) << " ";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " ";
    cout << vector_2d.at(1).at(1) << endl;
    cout << "---------------------" << endl;

    return 0;
}