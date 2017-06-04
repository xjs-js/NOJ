#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
using namespace std;

string add_self(string num)
{
    int c = 0;
    string relt = "";
    char t[1] = {};
    for(int i = num.size()-1; i >= 0; i--)
    {
        int n = (int)num[i] - 48;
        int temp = n * 2 + c;
        sprintf(t, "%d", (temp % 10));
        relt = t + relt;
        c = temp / 10;
    }
    if (c > 0)
    {
        sprintf(t, "%d", c);
        relt = t + relt;
    }

    return relt;
}

int main()
{
    int num;
    scanf("%d", &num);
    string relt = "2";
    for (int i = 1; i < num; i++)
        relt = add_self(relt);
    cout << relt << endl;
    return 0;
}

