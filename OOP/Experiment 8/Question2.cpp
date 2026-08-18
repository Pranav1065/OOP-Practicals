//Store Details of Five Customers
#include <iostream>
using namespace std;

class Customer
{
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "ID: " << id << "  Name: " << name << endl;
    }
};

int main()
{
    Customer c[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        cout << "\nCustomer " << i + 1 << endl;
        c[i].getData();
    }

    cout << "\nCustomer Details:\n";

    for(i = 0; i < 5; i++)
    {
        c[i].display();
    }

    return 0;
}
