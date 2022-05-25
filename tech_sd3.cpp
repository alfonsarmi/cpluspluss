class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      myMethod2();
    }
    void myMethod2() {  // Method/function defined inside the class
      cout << myMethod();
      MyClass2 myObj2;
      myObj2.myMethod2();
    }
};

class MyClass2 {        // The class
  public:              // Access specifier
    void myMethod2() {  // Method/function defined inside the class
      myMethod2();
    }
    void myMethod22() {  // Method/function defined inside the class
      cout << myMethod2();
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}