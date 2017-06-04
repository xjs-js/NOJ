// 2017-6-2

#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int *C = new int[k + 1];
    C[0] = 1;
    for (int i = 1; i <= k; i++)
        C[i] = C[i-1] * (n-i+1)/i;
    cout << C[k] << endl;
    return 0;
}