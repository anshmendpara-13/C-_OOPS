#include <iostream>
using namespace std;

void printLine(char = '_', int = 7);
int main()
{
    printLine();
    printLine('/');
    printLine('*', 4);
    printLine('R', 5);
    return 0;
}
void printLine(char ch, int Repeatcount)
{
    int i;
    cout << endl;
    for (i = 0; i < Repeatcount; i++)
    {
        cout << ch;
    }
}