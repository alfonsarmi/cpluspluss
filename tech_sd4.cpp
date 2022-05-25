// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class
class MyChild1: public MyClass {
};

// Derived class
class MyChild2: public MyChild1 {
};

int main() {
  MyChild2 myObj;
  myObj.myFunction();
  return 0;
}