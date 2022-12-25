#include <iostream>
#include <string>

using namespace std;

class bank
{
    char name[20];
    long int acc_no;
    char acc_type[20];
    int bal;

public:
    void getdata();
    void putdata();
    void create();
    void withdraw();
};

void bank::getdata()
{
    cout << "Enter name : " << endl;
    cin >> name;
    cout << "Enter account number : " << endl;
    cin >> acc_no;
    cout << "Enter balance : " << endl;
    cin >> bal;
    cout << "Enter account type : " << endl;
    cin >> acc_type;
}

void bank::putdata()
{
    cout << "customer name : " << name << endl;
    cout << "account number : " << acc_no << endl;
    cout << "account type : " << acc_type << endl;
    cout << "balance : " << bal << endl;
}

void bank::create()
{
    float ammount;
    cout << "Enter deposite ammount :- " << endl;
    // cout << "Enter ammount : " << endl;
    cin >> ammount;
    bal = bal + ammount;
    cout << "your account is created by " << ammount << " rupees " << endl;
    cout << "so, your available balance is : " << bal << endl;
}

void bank::withdraw()
{
    float ammount1;
    cout << "Enter withdraw ammount :- " << endl;
    // cout << "Enter ammount : " << endl;
    cin >> ammount1;
    bal = bal - ammount1;
    cout << "your account is debited by " << ammount1 << " rupees " << endl;
    cout << "so, your availabe balance is :- " << bal << endl;
}

int main()
{
    int choice;
    bank b;
    b.getdata();
    b.create();
    b.withdraw();
    b.putdata();
    return 0;
}