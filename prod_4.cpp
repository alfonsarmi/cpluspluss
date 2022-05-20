// Create a Truck class with some attributes
class Camion {
  public:
    string brand;   
    string model;
    int year;
};

// Create a Car class with some attributes
class Cochazo {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Cochazo carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Cochazo carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}