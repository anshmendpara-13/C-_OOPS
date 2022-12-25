#include <iostream>
using namespace std;

class date
{
    int dd, mm, yy, days;

public:
    void putdata(int d, int m, int y)
    {
        dd = d;
        mm = m;
        yy = y;
    }
    date operator-(date d1)
    {
        date d3;
        d3.dd = dd - d1.dd;
        d3.mm = mm - d1.mm;
        d3.yy = yy - d1.yy;
        days = d3.dd + d3.mm * 30 + d3.yy * 365;
        return d3;
    }
    date operator+(date d1)
    {
        date d3;
        cout << "\ndays = " << days;
        d3.dd = d1.dd + (days % 30);
        if (d3.dd > 30)
        {
            d3.mm = d3.dd / 30;
            d3.dd = d3.dd % 30;
        }
        d3.mm = d3.mm + (days / 30);
        d3.yy = d1.yy + (days / 356);
        return d3;
    }
    void display()
    {
        cout << "\nDate is : " << dd << " / " << mm << " / " << yy;
    }
};
int main()
{
    date d1, d2, d3, d4;
    d1.putdata(21, 02, 18);
    d2.putdata(22, 04, 18);
    d1.display();
    d2.display();
    d3 = d2 - d1;
    d4 = d2 + d1;
    d3.display();
    d4.display();
    return 0;
}