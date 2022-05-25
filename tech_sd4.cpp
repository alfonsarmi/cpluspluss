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

// Derived class
class MyChild3: public MyChild2 {
};

// Derived class
class MyChild4: public MyChild3 {
};

// Derived class
class MyChild5: public MyChild4 {
};

int main() {
  MyChild5 myObj;
  myObj.myFunction();
  return 0;
}