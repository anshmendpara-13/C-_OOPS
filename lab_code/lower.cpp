#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[2];
    cout << "Enter element 1 : " << endl;
    cin >> s[0];
    cout << "Enter element 2 : " << endl;
    cin >> s[1];

    transform(s[0].begin(), s[0].end(), s[0].begin(), ::tolower);
    transform(s[1].begin(), s[1].end(), s[1].begin(), ::tolower);
    if (s[0].length() <= s[1].length())
    {
        cout << s[0] << " " << s[1] << endl;
    }
    else
    {
        cout << s[1] << " " << s[0] << endl;
    }

    return 0;
}#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter name 1 : " << endl;
    cin >> s1;
    cout << "Enter name 2 : " << endl;
    cin >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1.length() <= s2.length())
    {
        cout << s1 << " " << s2 << endl;
    }
    else
    {
        cout << s2 << " " << s1 << endl;
    }

    return 0;
}#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter name 1 : " << endl;
    cin >> s1;
    cout << "Enter name 2 : " << endl;
    cin >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1.length() <= s2.length())
    {
        cout << s1 << " " << s2 << endl;
    }
    else
    {
        cout << s2 << " " << s1 << endl;
    }

    return 0;
}