#include <iostream>
#include <string>

using namespace std;

void printline(char = '@', int = 13);

int main()
{

    printline('A', 10);
    printline();
    printline('&');
    printline(10); 

    return 0;
}

void printline(char a, int repeat_element)
{
    for (int i = 1; i < repeat_element + 1; i++)
    {
        cout << i << " -> "<< a << endl;
    }
    cout << endl; 
}