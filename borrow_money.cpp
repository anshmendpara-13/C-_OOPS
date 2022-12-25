#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int money = 0;
    for (int i = 1; i <= w; i++)
    {
        money = money + (k * i);
        // cout << money << endl;
    }
    // cout << money << endl;
    if (n >= money)
    {
        cout << '0' << endl;
    }
    else
    {
        cout << (money - n) << endl;
    }

    return 0;
}