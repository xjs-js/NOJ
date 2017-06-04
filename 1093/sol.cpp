// 2017-6-2

#include <stdio.h>

#define MAX_N = 1000000;

int main() 
{
    const int MOD = 1000000;
    int n, S = 0;
    scanf("%d", &n);
    int *fac = new int[n + 1];
    int memo = 1;
    for (int i = 1; i <= n; i++)
    {
        memo = (i * memo) % MOD;
        S = (S + memo) % MOD;
    }
    printf("%d\n", S);
}