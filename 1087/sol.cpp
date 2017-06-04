// 2017-6-2

#include <iostream>

using namespace std;

int main()
{
    int n, t, sum;
    while (cin >> n && n) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> t;
            sum += t;
        }
        cout << sum << endl;
        cout << endl;
    }
    return 0;
}