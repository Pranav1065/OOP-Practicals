//Implement a friend function to display employee details.
#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void getData()
    {
        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    friend void display(Employee);
};

void display(Employee e)
{
    cout << "\nEmployee Details:" << endl;
    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
}

int main()
{
    Employee e;

    e.getData();
    display(e);

    return 0;
}
