#include <iostream>
#include <string>
using namespace std;

int main() {
    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }

    //Short expression:
    int time2 = 20;
    string result = (time2 < 18) ? "Good day." : "Good evening.";
    cout << result;

  return 0;
}