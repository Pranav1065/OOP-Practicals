//Develop a program to store and display library book records.
#include <iostream>
using namespace std;

class Book
{
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter book ID: ";
        cin >> id;

        cout << "Enter book name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;
    }
};

int main()
{
    Book b[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        b[i].getData();
    }

    cout << "\nLibrary Book Records\n";

    for(i = 0; i < 3; i++)
    {
        b[i].display();
    }

    return 0;
}
