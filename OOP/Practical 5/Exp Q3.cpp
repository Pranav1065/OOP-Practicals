//Write an inline function to calculate the area of a circle.
#include <iostream>
using namespace std;

class Circle
{
public:
    float r;

    void accept()
    {
        cout << "Enter radius: ";
        cin >> r;
    }

    inline void display()
    {
        cout << "Area = " << 3.14 * r * r;
    }
};

int main()
{
    Circle c;

    c.accept();
    c.display();

    return 0;
}
