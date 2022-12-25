#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter number : ";
    cin >> s;
    reverse(s.begin(), s.end());
    long long int num = stoi(s);
    cout << num << endl;

    return 0;
}