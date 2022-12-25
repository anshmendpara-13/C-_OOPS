#include <iostream>
#include <string>

using namespace std;

class g_f
{
public:
    g_f()
    {
        cout << "my hobby is hockey " << endl;
    }
};

class f : public g_f
{
public:
    f()
    {
        cout << "my hobby is chess " << endl;
    }
};

class i : public f
{
public:
    i()
    {
        cout << "my hobby is criket" << endl;
    }
};

int main()
{
    i my;
    return 0;
}