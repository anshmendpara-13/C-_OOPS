#include <iostream>
#include <string>

using namespace std;

class number
{
private:
    int n;

public:
    void readdata()
    {
        cout << "Enter the limit : " ;
        cin >> n;
    }
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
};

int main()
{

    number n1;
    n1.readdata();
    cout << "your value is : " << endl; 
    n1.display();
    return 0;
}