#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        double d, e;
        d = (a * 1000) / (x * 60);
        e = (b * 1000) / (y * 60);
        // cout << d << " "<< e << endl;
        // cout<<d<<endl;
        // cout<<e<<endl;
        if (d == e)
        {
            cout << "Equal" << endl;
        }
        else if (d > e)
        {
            cout << "Alice" << endl;
        }
        else if (d < e)
        {
            cout << "Bob" << endl;
        }
    }
}