#include <cstdio>

__int64 A[2000000];
__int64 B[2000000];

int main()
{
    int m,n;
    scanf("%d%d", &m, &n);
    __int64 sumA = 0, sumB = 0;
    __int64 minDelta = 9999999;
    int cnt=0;
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
        sumA += A[i];
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
        sumB += B[i];
    }

    for (int i = 0; i <= m - n; i++)
    {
        __int64 base = A[i] - B[0];
        int j;
        for (j = 1; j < n; j++)
        {
            if (A[i+j] - B[j] != base)
                break;
        }
        if (j == n)
        {
            if (base < minDelta)
                minDelta = base;
            cnt++;
        }
    }

    if (minDelta == 9999999)
        printf("0\n");
    else
        printf("%d %I64d\n", cnt, (sumA - sumB - minDelta*n));
}
