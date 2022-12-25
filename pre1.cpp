// inline function and friend function  // 6

#include <iostream>
#include <string>

using namespace std;

class cu
{
private:
    int s;
    friend cu cube(int s);

public:
};

cu inline void cube(int s)
{
    cout << "cube of " << s << " is " << s * s * s << endl;
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    cube(n);
    return 0;
}