#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string add(string s)
{
    string relt;

    int rest = 0;
    for (int i = s.size()-1; i >= 0; i--)
    {
        int temp = (s[i] - '0');
        temp *= temp;

        temp += rest;

        rest = temp / 10;

        char t = temp % 10 + '0';
        relt = t + relt;

    }

    if(rest > 0) {
        char t = rest + '0';
        relt = t + relt;
    }
    return relt;
}


int main()
{
    cout << judge("999") << endl;
}
