#include <iostream>
#include <string>

using namespace std;

class student
{

public:
    struct mark
    {
        int roll;
        float sub1, sub2, sub3;
    } m;
    struct detail
    {
        char address[100];
        int roll;
        char class1[10];
        float total;
        int sub_pass;
        string overall_pass;
    } d;

    void getdetails(int i)
    {
        cout << "Enter strudent " << i << " details : " << endl;
        cout << "Enter roll number : " << endl;
        cin >> d.roll;
        cout << "Enter class" << endl;
        cin >> d.class1;
        cout << "Enter address : " << endl;
        cin >> d.address;
        cout << "Enter sub1 marks : " << endl;
        cin >> m.sub1;
        cout << "Enter sub2 marks : " << endl;
        cin >> m.sub2;
        cout << "Enter sub3 marks : " << endl;
        cin >> m.sub3;
    }

    void result()
    {
        int cnt = 0;
        if (m.sub1 >= 35)
        {
            cnt++;
        }
        if (m.sub2 >= 35)
        {
            cnt++;
        }
        if (m.sub3 >= 35)
        {
            cnt++;
        }

        d.total = m.sub1 + m.sub2 + m.sub3;
        if (cnt == 3)
        {
            d.overall_pass = "cleared";
        }
        else
        {
            d.overall_pass = "failed";
        }
    }

    void display()
    {
        cout << "roll no : " << endl;
        cout << d.roll << endl;
        cout << "class : " << endl;
        cout << d.class1 << endl;
        cout << "total : " << endl;
        cout << d.total << endl;
        cout << "overall : " << endl;
        cout << d.overall_pass << endl;
    }
};

int main()
{
    student s[100];
    int m;
    cout << "Enter student number : " << endl;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        s[i].getdetails(i + 1);
        s[i].result();
        s[i].display();
    }

    // cout <<  <<endl;
    return 0;
}