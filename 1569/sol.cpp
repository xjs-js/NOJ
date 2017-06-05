// 2017-6-4


#include <iostream>

using namespace std;

double C[31];

int combination(int n, int m) {
    C[0] = 1;
    for (int i = 1; i <= m; i++)
        C[i] = C[i - 1] * (n - i + 1) / i;
    return (int)C[m];
}

int main()
{
    int n, m;
    while((cin >> n >> m) && (n || m)) {
        cout << combination(n, m) << endl;
    }
    return 0;
}