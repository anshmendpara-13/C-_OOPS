#include <iostream>
using namespace std;

void swap(int *x, int *y);
int main()
{
    int i, j;
    i = 10;
    j = 20;
    cout << "the value of i before swapping is : " << j << endl;
    cout << "the value of j before swapping is : " << i << endl;
    swap(&i, &j);
    cout << "the value of j after swapping is : " << i << endl;
    cout << "the value of i after swapping is : " << j << endl;
    return (0);
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}