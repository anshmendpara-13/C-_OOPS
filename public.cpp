#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

class myclass
{
public:
    int mynum;
    string mystring;
};

int main()
{
    string s;
    myclass myobj;
    // myobj.mynum = 15;
    // myobj.mystring = "some text";

    cout << "Enter the number : " << endl;
    cin >> myobj.mynum;

    cout << "Enter the string : " << endl;
    cin >> s;

    getline(cin, s);
    myobj.mystring = s;

    cout << myobj.mynum << endl;
    cout << myobj.mystring << endl;

    return 0;
}