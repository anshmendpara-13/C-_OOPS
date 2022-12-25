#include <iostream>
using namespace std;
void printLine(char ch, int Repeatcount)
{
    int i;
    cout << endl;
    for (i = 0; i < Repeatcount; i++)
    {
        cout << ch;
    }
}
void printLine(char = '_', int = 70);
int main()
{
    printLine();
    printLine('/');
    printLine('*', 40);
    printLine('R', 55);
    return 0;
}
