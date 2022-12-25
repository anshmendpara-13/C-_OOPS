#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    while (a--)
    {
        cout << a + 1 << endl;
        if (a < 1)
        {
            cout << "now program is start" << endl;
        }
    }

    return 0;
}