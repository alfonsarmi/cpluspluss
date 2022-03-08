#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNum = 15;   // Now myNum is 15
    myNum = 10;       // Now myNum is 10
    cout << myNum;

    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    int myAge = 35;
    cout << "I am " << myAge << " years old.";

    //many variables:
    int x = 5, y = 6, z = 50;
    cout << x + y + z;

    //constants
    const int minutesPerHour = 60;
    const float PI = 3.14;
    cout << minutesPerHour << "\n";
    cout << PI;

    //string:
    string greeting = "Hello";
    cout << greeting;

    return 0;
}