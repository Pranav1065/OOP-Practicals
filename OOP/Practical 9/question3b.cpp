//panooooooooooo
#include <iostream>
using namespace std;
class student{
    private:
    string name;
   int roll;
    int marks;
    public:
    student(int n, int r, int m){
        name = n;
        roll = r;
        marks = m;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    student s("Naiteek", 17, 9);
    student s1("igfigfgfdfg ef", 625, 1);
    s.display();
    s1.display();

    return 0;
}
