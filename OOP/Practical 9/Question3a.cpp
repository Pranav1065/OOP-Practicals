//panoooooooo
#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int roll;
    int marks;
    public:
    student(){
        name = "naiteek";
        roll = 17;
        marks = 99;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    student s;
    s.display();
    return 0;
}
