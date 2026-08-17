//Write a program using a friend function to compare two objects.
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    void getData()
    {
        cout << "Enter number: ";
        cin >> value;
    }

    friend void compare(Number, Number);
};

void compare(Number a, Number b)
{
    if(a.value > b.value)
        cout << "First object has greater value";
    else if(a.value < b.value)
        cout << "Second object has greater value";
    else
        cout << "Both objects have equal value";
}

int main()
{
    Number obj1, obj2;

    cout << "For first object:\n";
    obj1.getData();

    cout << "For second object:\n";
    obj2.getData();

    compare(obj1, obj2);

    return 0;
}
