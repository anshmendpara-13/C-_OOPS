#include <iostream>
using namespace std;

class Bank
{
    char name[20];
    long long int acc_no;
    char acc_type[20];
    int bal;

public:
    void getdata();
    void putdata();
    void create();
    void withdraw();
};
void Bank::getdata()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter account number : ";
    cin >> acc_no;
    cout << "Enter balance : ";
    cin >> bal;
    cout << "Enter account type : ";
    cin >> acc_type;
}
void Bank::putdata()
{
    cout << "customer name = " << name << endl;
    cout << "account number = " << acc_no << endl;
    cout << "account type = " << acc_type << endl;
    cout << "balance = " << bal;
}
void Bank::create()
{
    float amount;
    cout << "Enter ammount you want to deposite : ";
    cin >> amount;
    bal = bal + amount;
    cout << "Your account is created by " << amount << " rupees " << endl;
    cout << "So,Your avaliable balance is " << bal << endl;
}
void Bank::withdraw()
{
    float ammount1;
    cout << "Enter Ammount you want ti withdraw ";
    cin >> ammount1;
    bal = bal - ammount1;
    cout << "Your Account is debited by " << ammount1 << " rupees " << endl;
    cout << "So,your available balance is " << bal << endl;
}
int main()
{
    int choice;
    Bank b;
    b.getdata();
    b.create();
    b.withdraw();

    cout << "1. deposite\n"
         << endl;
    cout << "2. withdraw\n"
         << endl;
    cout << "Enter choice : " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        b.create();
        break;
    case 2:
        b.withdraw();
        break;
    default:
        cout << "wrong operation";
        break;
    }

    b.putdata();
    return 0;
}