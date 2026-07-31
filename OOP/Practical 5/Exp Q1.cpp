//Write a program to calculate the cube of a number using an inline function.
#include <iostream>
using namespace std;

class Cube
{
public:
    int n;

    void accept()
    {
        cout << "Enter number: ";
        cin >> n;
    }

    inline void display()
    {
        cout << "Cube = " << n * n * n;
    }
};

int main()
{
    Cube c;

    c.accept();
    c.display();

    return 0;
}
