#include <iostream>
using namespace std;

class student
{
    char name[10];
    char course[10];

public:
    void getstudent()
    {
        cout << "input name and cource : " << endl;
        cin >> name >> course;
    }
    void printstudent()
    {
        cout << name << endl;
        cout << course << endl;
    }
};

class mark : public student
{
    int sub1, sub2, sub3;

public:
    void getmark()
    {
        cout << "input marks : " << endl;
        cin >> sub1 >> sub2 >> sub3;
    }
    void findresult()
    {
        if (sub1 < 40 || sub2 < 40 || sub3 < 40)
        {
            cout << "fail" << endl;
        }
        else
        {
            cout << "pass" << endl;
        }
    }
};

int main()
{
    mark std;
    std.getstudent();
    std.printstudent();
    std.getmark();
    std.findresult();
    return 0;
}