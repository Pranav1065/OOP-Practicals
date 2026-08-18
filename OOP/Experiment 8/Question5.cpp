//WAP to create a class staff having data member as name,post and salary.Accept data for 5staff and display the staff details having post = “HOD”
#include <iostream>
using namespace std;

class Staff
{
    string name;
    string post;
    float salary;

public:
    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Post: ";
        cin >> post;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        if(post == "HOD")
        {
            cout << "\nName: " << name;
            cout << "\nPost: " << post;
            cout << "\nSalary: " << salary << endl;
        }
    }
};

int main()
{
    Staff s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        cout << "\nStaff " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\nStaff having post HOD:\n";

    for(i = 0; i < 5; i++)
    {
        s[i].display();
    }

    return 0;
}
