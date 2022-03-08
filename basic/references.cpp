#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    A reference variable is a "reference" to an existing variable, 
    and it is created with the & operator:
    */
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    
    // But it can also be used to get the memory address of a variable
    cout << &food;

    return 0;
}
