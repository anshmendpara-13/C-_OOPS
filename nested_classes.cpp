#include <iostream>
using namespace std;
class A
{
public:
    class B
    {
    private:
        int num;

    public:
        void getdata(int n)
        {
            num = n;
        }
        void putdata()
        {
            cout << "The number is " << num;
        }
    };
};
int main()
{
    cout << "Nested classes in C++" << endl;
    A ::B obj;
    obj.getdata(9);
    obj.putdata();
    return 0;
}

/*
In the above program, class B is defined inside the class A so it is a nested class.
The class B contains a private variable num and two public functions getdata()
and putdata(). The function getdata() takes the data and the function putdata()
displays the data. This is given as follows.
*/