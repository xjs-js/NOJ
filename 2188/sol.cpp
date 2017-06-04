#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
__int64 M = 1e9 + 7;

__int64 pow_mod(__int64 a, __int64 n, __int64 m)
{
	if (n == 0) return 1;
	__int64 x = pow_mod(a, n/2, m);
	__int64 ans = (__int64)x * x % m;
	if (n % 2 == 1)
		ans = ans * a % m;
	return ans;
}
//int PowerMod(int a, int b, int c)
//{
//    int ans = 1;
//    a = a % c;
//    while(b>0) {
//        if(b % 2 = = 1)
//        ans = (ans * a) % c;
//        b = b/2;
//        a = (a * a) % c;
//    }
//    return ans;
//}

int main() {
	__int64 n;
	scanf("%I64d", &n);
	printf("%I64d\n", 1 + pow_mod(2, n-1, M) % M);
	return 0;
}
