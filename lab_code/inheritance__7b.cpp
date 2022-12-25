#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void getstudent(int a)
    {
        rollno = a;
    }
    void putstudent()
    {
        cout << rollno << endl;
    }
};

class test : public student
{
protected:
    float sub1, sub2;

public:
    void getmark(float x, float y)
    {
        sub1 = x;
        sub2 = y;
    }
    void putmark()
    {
        cout << "mark of subject 1 " << sub1 << endl;
        cout << "mark of subject 2 " << sub2 << endl;
    }
};

class result : public test
{
    float total;

public:
    void display()
    {
        total = sub1 + sub2;
        putstudent();
        putmark();
        cout << "total = " << total << endl;
    }
};

int main()
{
    result std;
    std.getstudent(111);
    std.getmark(95.00, 76.12);
    std.display();
}