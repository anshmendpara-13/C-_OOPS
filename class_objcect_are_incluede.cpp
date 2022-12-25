#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    char name[20], regd[10], branch[10];
    int sem;

public:
    void input();
    void display();
};

void student::input()
{
    cout << "Enter name : " << endl;
    cin >> name;
    cout << "Enter regdno : " << endl;
    cin >> regd;
    cout << "Enter branch : " << endl;
    cin >> branch;
    cout << "Enter sem : " << endl;
    cin >> sem;
}

void student::display()
{
    cout << "name : " << name << endl;
    cout << "regdno : " << regd << endl;
    cout << "branch : " << branch << endl;
    cout << "sem : " << sem << endl;
}

int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}