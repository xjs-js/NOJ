// 2017-6-2

#include <iostream>

using namespace std;

int pow_mod(int a, long long n, int m) {
    if (n == 0) return 1;
    int x =pow_mod(a, n/2, m);
    long long ans = (long long)x * x % m;
    if (n % 2 == 1) ans = ans * a % m;
    return (int)ans;
}

int main()
{
    int a, m;
    long long n;
    while (cin >> a >> n >> m) {
        cout << pow_mod(a, n, m) << endl;
    }
    return 0;
}