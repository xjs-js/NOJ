#include <iostream>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int no_day(int y, int m, int d)
{
    int relt = 0;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        days[2] = 29;
    for (int i = 1; i <= m-1; i++)
        relt += days[i];
    days[2] = 28;
    return relt + d;
}

int sum_day(int y, int m, int d)
{
    int relt = 0;
    
    for (int i = 2000; i < y; i++)
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) relt += 366;
        else                                            relt += 365;
    
    return relt - 1;
}

int main()
{
    int y,m,d;
    while(cin >> y){
        if (y == -1) break;
        cin >> m >> d;
        int second = no_day(y, m, d);
        int first = sum_day(y, m, d) + second;
        cout << first << endl << second << endl;
    }
}