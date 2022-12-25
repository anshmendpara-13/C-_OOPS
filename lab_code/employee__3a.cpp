#include <iostream>
using namespace std;

class emp
{
private:
    char employee_name[20];
    int E_number;
    int basic_salary;
    int all_allowances;
    int it;
    int net_salary;

public:
    void getdata();
    void calculation();
    void printdata();
};

void emp::getdata()
{
    cout << "Enter name : " << endl;
    cin >> employee_name;
    cout << "Enter number : " << endl;
    cin >> E_number;
    cout << "Enter basic salary : " << endl;
    cin >> basic_salary;
    // cout << "Enter all_allowances : " << endl;
    // cin >> all_allowances;
}

void emp::calculation()
{
    all_allowances = 0.10 * basic_salary;
    it = 0.35 * basic_salary;
    net_salary = basic_salary + all_allowances - it;
}

void emp ::printdata()
{
    cout << "Name : " << employee_name << endl;
    cout << "number : " << E_number << endl;
    cout << "basic_salary : " << basic_salary << endl;
    cout << "net salary : " << net_salary << endl;
}

int main()
{
    emp e;
    e.getdata();
    e.calculation();
    e.printdata();
}