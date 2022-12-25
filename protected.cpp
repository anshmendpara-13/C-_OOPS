#include <iostream>
#include <string>

using namespace std;

class parent
{
protected:
    int id_proteced;

public:
    void setid(int id);
    void display();
};

void parent::setid(int id)
{

    id_proteced = id;
}

void parent::display()
{

    cout << "id_protected is : " << id_proteced << endl;
}

int main()
{
    parent c;
    int id;
    cout << "Enter the id : " << endl;
    cin >> id;
    c.setid(id);
    c.display();
    // cout <<  <<endl;
    return 0;
}