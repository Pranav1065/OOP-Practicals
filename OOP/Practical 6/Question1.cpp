//write a c ++ programm to find the maximum of two number using friend function of same class
#include <iostream>
using namespace std;
class Number
{
    int a, b;
public:
    void getData()
    {
    cout << "Enter two numbers: ";
     cin >> a >> b;
    }
    friend void findMax(Number n);
};
void findMax(Number n)
{
    if (n.a > n.b)
      cout << "Maximum number = " << n.a;
    else
      cout << "Maximum number = " << n.b;
}
int main()
{
    Number n;
    n.getData();
    findMax(n);
    return 0;
}
