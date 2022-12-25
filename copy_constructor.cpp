#include <iostream>
#include <string>

using namespace std;

class copy1
{
private:
    int var;

public:
    copy1(int temp)
    {
        var = temp;
    }
    void calculate()
    {
        int fact;
        fact = 1;
        for (int i = 1; i <= var; i++)
        {
            fact = fact * i;
        }
        cout << "your factorial of " << var << " is " << fact << endl;
    }
};

int main()
{
    copy1 c(5);
    c.calculate();
    // cout <<  <<endl;
    return 0;
}