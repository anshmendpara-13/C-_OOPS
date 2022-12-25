#include <iostream>
#include <conio.h>

using namespace std;

void swap(int *x, int *y);

int main()
{
    int i, j;
    i = 10;
    j = 20;
    cout << "\n the value of i before swapping is:" << i;
    cout << "\n the value of j before swapping is:" << j;

    swap(&i, &j);
    cout << "\n the value of i after swapping is:" << i;
    cout << "\n the value of j after swapping is:" << j;

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}