#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];

    string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(int i = 0; i < 4; i++) {
        cout << cars2[i] << "\n";
        cout << i << ": " << cars2[i] << "\n";
    }

    int getArraySize = sizeof(cars) / sizeof(cars[0]);
    cout << "Size of array is: " << getArraySize;

  return 0;
}
