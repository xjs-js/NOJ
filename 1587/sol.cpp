// 2017-6-5

#include <cstdio>

int main()
{
    __int64 n;
    scanf("%I64d", &n);
    double sum = n;
    double cnt = 1;
    double relt;

    if (n == 1)
    {
        printf("1.000\n");
        return 0;
    }

    while (n != 1) {
        if (n % 2 == 1) n = n * 3 + 1;
        else            n /= 2;
        sum += n;
        ++cnt;
    }

    printf("%.3f", sum / cnt);
    return 0;
}