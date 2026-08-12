// write C++ program to find the maximum of two numbers using a friend function of two different classes.
#include <iostream>
using namespace std;

class A
{
    int a;
public:
    A(int x) { a = x; }
    int getA() { return a; }
};

class B
{
    int b;
public:
    B(int x) { b = x; }
    friend void max(A, B);
};

void max(A x, B y)
{
    if(x.getA() > y.b)
        cout << "Maximum = " << x.getA();
    else
        cout << "Maximum = " << y.b;
}

int main()
{
    A x(10);
    B y(20);
    max(x, y);
  return 0;
}
