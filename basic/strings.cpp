#include <iostream>
#include <string>
using namespace std;
 
int main () {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;
    fullName = firstName + " " + lastName;
    cout << fullName;
    fullName = firstName.append(lastName);
    cout << fullName;

    string fullName2;
    cout << "Type your full name: ";
    getline (cin, fullName2);
    cout << "Your name is: " << fullName2;

    return 0;
}
