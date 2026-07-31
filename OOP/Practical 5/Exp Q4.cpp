// Write an inline function to calculate simple interest.
#include <iostream>
using namespace std;

class SI
{
public:
    float p, r, t;

    void accept()
    {
        cout << "Enter Principal, Rate and Time: ";
        cin >> p >> r >> t;
    }

    inline void display()
    {
        cout << "Simple Interest = " << (p * r * t) / 100;
    }
};

int main()
{
    SI s;

    s.accept();
    s.display();

    return 0;
}
