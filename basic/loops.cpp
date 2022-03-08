#include <iostream>
using namespace std;

int main() {
    //while:
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

    //for
    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << " ";
        if (i == 4) {
            break;
        } else {
            continue;            
        }        
        cout << i << "\n";
    }


  return 0;
}

