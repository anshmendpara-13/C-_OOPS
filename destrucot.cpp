#include<iostream>
#include<string>

using namespace std;
class des
{
    des()
    {
        cout<<"constructed"<<endl;
    }
    ~des()
    {
        cout<<"Destructed"<<endl;
    }
};
int main()
{
    des d();
    // cout <<  <<endl;
    return 0;
}