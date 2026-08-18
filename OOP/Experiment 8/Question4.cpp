//Employee — Store and Display 5 Employees
#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    string department;

public:
    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Department: ";
        cin >> department;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nID: " << id;
        cout << "\nDepartment: " << department << endl;
    }
};

int main()
{
    Employee e[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].getData();
    }

    cout << "\nEmployee Details:\n";

    for(i = 0; i < 5; i++)
    {
        e[i].display();
    }

    return 0;
}
