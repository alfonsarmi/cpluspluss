#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << x + y;
  cout << x - y;
  cout << x * y;
  cout << x / y;
  cout << x % y;
  ++x;
  cout << x;
  --x;
  cout << x;
  x += 3;
  cout << x;
  x -= 3;
  cout << x;
  x *= 3;
  cout << x;
  
  double x2 = 5;
  x2 /= 3;
  cout << x2;

  x %= 3;
  cout << x;

  x &= 3;
  cout << x;

  x |= 3;
  cout << x;

  x ^= 3;
  cout << x;

  x >>= 3;
  cout << x;

  x <<= 3;
  cout << x;

  int z = 5;
  int p = 3;
  cout << (z > p); // ..
  cout << (z == p); // ..
  cout << (z != p); //  ..
  cout << (z > p); //..
  cout << (z < p); // ..
  cout << (z >= p); //..

  //Logical operators
  cout << (x > 3 && x < 10); 
  cout << (x > 3 || x < 4);
  cout << (!(x > 3 && x < 10));

  return 0;
}
