#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long int a;
    a = s.length();
    // cout << a;
    int cnt = 0;
    int cnt1 = 0;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == '7')
        {
            cnt1++;
        }
        if ((s[i] == '4') || (s[i] == '7'))
        {
            cnt++;
        }
        else
        {
            cnt = cnt;
        }
    }
    if (cnt != a || cnt1 == a)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}