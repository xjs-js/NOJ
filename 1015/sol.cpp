#include <iostream>
using namespace std;

int gcd(int m, int n)
{
    if (n == 0) return m;
    else        return gcd(n, m%n);
}

int main()
{
    int m, n;
    cin >> m >> n;
    int first = gcd(m, n);
    cout << first << " " << m * n / first << endl;
    return 0;
}