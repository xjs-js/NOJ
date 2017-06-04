// 2017-6-2

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *num = new int[n];

    for (int i = 0; i < n; i++)
        cin >> num[i];

    sort(num, num+n);

    for (int i = 0; i < n; i++) {
        cout << num[i];
        if (i != n - 1) cout << ' ';
    }
    cout << endl;
        
}