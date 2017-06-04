#include <cstdio>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

string judge(int n)
{
    // calculate length of n
    string s;
    s = to_string(n);
    int len = s.length();

    for (int i=1; i < len; i++)
    {
        int left = n % (int)pow(10, i);
        int right = n - left * pow(10, i);
        if (left + right == n && right != 0)
            return "Yes";
    }

    return "No";
}

int main()
{
    int num, i=1;
    while(scanf("%d", &num), num)
    {
        printf("Case%d: %s\n", i++, judge(num).c_str());
    }
}
