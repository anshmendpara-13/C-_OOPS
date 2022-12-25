#include <iostream>
#include <string>

using namespace std;

float sum(float i, int j, int k, int l)
{
    return (i + j + k + l);
}

int main()
{

    int a = 2, b = 3, c = 4, d = 5;
    float sum(float a, int b = 10, int c = 15, int d = 20);
    // cout << a << endl; 
    cout << "sum is  : " << sum(0) << endl;
    cout << "sum is  : " << sum(a, b, c, d) << endl;
    cout << "sum is  : " << sum(a, b, c) << endl;
    cout << "sum is  : " << sum(a, b) << endl;
    cout << "sum is  : " << sum(a) << endl;
    cout << "sum is  : " << sum(b, c, d) << endl;

    return 0;
}