#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    char emp_name[30], designation[20];
    float basic, ta, da, hra, pf, gross, net;

public:
    void input(int k)
    {
        cout << "Enter employee : " << k << " detail " << endl;
        cout << "Enter name : " << endl;
        cin >> emp_name;
        cout << "Enter designation : " << endl;
        cin >> designation;
        cout << "Enter basic salary : " << endl;
        cin >> basic;
    }

    void calculate(int k)
    {
        ta = 0.55 * basic;
        da = 0.65 * basic;
        hra = 0.35 * basic;
        pf = 0.12 * basic;
        gross = basic + da + hra;
        net = gross - pf;
    }

    void display(int k)
    {
        cout << "Employee : " << k << " detail " << endl;
        cout << "Name : " << endl;
        cout << emp_name << endl;
        cout << "designation : " << endl;
        cout << designation << endl;
        cout << "basic salary : " << endl;
        cout << basic << endl;
        cout << "gross salary : " << endl;
        cout << gross << endl;
        cout << "net salary : " << endl;
        cout << net << endl;
    }
};

int main()
{
    employee emp[100];
    int n, i;
    cout << "Enter th number of employee : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        emp[i].input(i + 1);
        emp[i].calculate(i + 1);
        emp[i].display(i + 1);
    }

    return 0;
}