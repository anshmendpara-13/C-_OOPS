#include <iostream>
#include <string>

using namespace std;

class encapsulation
{
private:
    int x;

public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

int main()
{
    encapsulation obj;
    int y;
    cout << "Enter the number you want to set : " << endl;
    cin >> y;
    obj.set(y);
    cout << "your set number is : " << obj.get() << endl;
    return 0;
}