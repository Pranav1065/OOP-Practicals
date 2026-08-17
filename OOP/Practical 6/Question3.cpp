//Write a program to add private members of two different classes. and calculate the average using a friend function.
#include <iostream>
using namespace std;

class B;   // Forward declaration

class A
{
private:
    int a;

public:
    void getData()
    {
        cout << "Enter value for class A: ";
        cin >> a;
    }

    friend void average(A, B);
};

class B
{
private:
    int b;

public:
    void getData()
    {
        cout << "Enter value for class B: ";
        cin >> b;
    }

    friend void average(A, B);
};

void average(A x, B y)
{
    int sum;
    float avg;

    sum = x.a + y.b;
    avg = sum / 2.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;
}

int main()
{
    A obj1;
    B obj2;

    obj1.getData();
    obj2.getData();

    average(obj1, obj2);

    return 0;
}
