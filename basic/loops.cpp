#include <iostream>
using namespace std;

int main() {
    //while:
    int i = 0;
    int j = 0;
    do {
        cout << i << "\n";        
        for (int j = 0; j <= 10; j = j + 2) {
            cout << i << " ";
            if (i == 4) {
                break;
            }
            else {
                continue;
            }
            cout << i << "\n";
        }
        i++;
    }
    while (i < 5);

    //for
    int i2 = 0;
    int j2 = 0;
    for (int i2 = 0; i2 <= 10; i2 = i2 + 2) {
        cout << i2 << " ";
        do {
            cout << i2 << "\n";
            j2++;
        } while (j2 < 5);
        if (i2 == 4) {
            break;
        } else {
            continue;            
        }        
        cout << i2 << "\n";
    }


  return 0;
}

