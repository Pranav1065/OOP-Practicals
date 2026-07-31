//Write an inline function to swap two numbers.
#include <iostream>
using namespace std;

class Swap
{
public:
    int a, b, temp;

    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    inline void display()
    {
        temp = a;
        a = b;
        b = temp;

        cout << "After Swapping:\n";
        cout << "a = " << a << endl;
        cout << "b = " << b;
    }
};

int main()
{
    Swap s;

    s.accept();
    s.display();

    return 0;
}
