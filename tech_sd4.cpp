// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

int main() {
  MyClass myObj;
  myObj.myFunction();
  return 0;
}