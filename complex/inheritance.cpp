// multiple inheritance.cpp
#include <iostream>
using namespace std;
class A
{
public:
    int x;
    void getx()
    {
        cout << "enter value of x: "; cin >> x;
    }
};
class B
{
public:
    int y;
    void gety()
    {
        cout << "enter value of y: "; cin >> y;
    }
};
class C : public A, public B   //C is derived from class A and class B
{
public:
    void sum()
    {
        cout << "Sum = " << x + y;
    }
};
class D
{
public:
    int l;
    void getl()
    {
        cout << "enter value of l: "; cin >> l;
    }
};
class E
{
public:
    int m;
    void getm()
    {
        cout << "enter value of m: "; cin >> m;
    }
};
class F : public C, public D   //F is derived from class C (A+B) and class D
{
public:
    void sum()
    {
        cout << "Sum = " << x + y + l;
    }
};

int main()
{
    F obj1; //object of derived class C
    obj1.getx();
    obj1.gety();
    obj1.getl();
    obj1.sum();
    return 0;
}   	//end of program