#include <iostream>
#include <string>
using namespace std;

// Function declaration
void myFunction2();

void myFunction() {
  cout << "I just got executed!\n";
}

void myFunction3(string fname) {
  cout << fname << " Refsnes\n";
}

void myFunction4(string country = "Norway") {
  cout << country << "\n";
}

void myFunction5(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int myFunction6(int x) {
  return 5 + x;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
    myFunction();
    myFunction();

    myFunction2();

    myFunction3("Liam");
    myFunction3("Jenny");
    myFunction3("Anja");

    myFunction4("Sweden");
    myFunction4("India");
    myFunction4();

    myFunction5("Liam", 3);
    myFunction5("Jenny", 14);

    cout << myFunction6(3);


    //Swap numbers
    int firstNum = 10;
    int secondNum = 20;
    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";
    swapNums(firstNum, secondNum);
    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    //function overloading:
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;

    //Recursion:
    int result = sum(10);
    cout << result;

  return 0;
}

// Function definition
void myFunction2() {
  cout << "I just got executed2!";
}