#include <iostream>
#include <string>

using namespace std;

// int main()
// {
//     int line;
//     cout << "Enter line : ";
//     cin >> line;

//     // 1
//     for (int i = 0; i <= line; i++)

//     // 2
//     // for (int i = line; i >= 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << (char)(j + 65) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

int main()
{
    int line;
    cout << "Enter line : ";
    cin >> line;

    // 1
    for (int i = 0; i <= line; i++)

    // 2
    // for (int i = line; i >= 0; i--)
    {
        for (int j = 0; j <= line - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << (char)(j + 65) << " ";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}