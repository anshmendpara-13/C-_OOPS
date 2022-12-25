#include <bits/stdc++.h>

using namespace std; 

int main()
{
    int num, i;
    cout << "Enter the number : " << endl;
    cin >> num;
    i = 2;

    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            cout << "not a prime number" << endl;
            break;
        }
        i++;
    }

    if (i == num)
        cout << "prime number" << endl;

    return 0;
}
