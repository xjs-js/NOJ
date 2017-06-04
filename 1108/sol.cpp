// 2017-6-2

#include <iostream>
#include <string.h>
#include <map>
using namespace std;

int main()
{
    int T;
    int n, t, target;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        map<int, int> mymap;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> t;
            mymap[t] = j + 1;
        }
        cin >> target;
        if (mymap[target] == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}