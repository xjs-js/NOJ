#include <algorithm>
#include <cstdio>

double calc(__int64 a, __int64 b)
{
    int left = a-b;
    int right = a+b;
    int m = 1;
    double relt1, relt2;
    double rem = left;
    while(true)
    {
        double x = left / (2.0 * m);
        if (x < b)
        {
            relt1 = rem;
            break;
        }
        rem = x;
        m += 1;
    }
    m = 1;
    rem = right;
    while(true)
    {
        double x = right / (2.0 * m);
        if (x < b)
        {
            relt2 = rem;
            break;
        }
        rem = x;
        m += 1;
    }
    if (relt1 == left)
        return relt2;

    return std::min(relt1, relt2);
}

int main()
{
    __int64 a, b;
    scanf("%I64d%I64d", &a, &b);
    if (b * 1.0 / a > 1.0)
    {
        printf("-1\n");
        return 0;
    }
    if (b * 1.0 / a == 1)
    {
        printf("%I64d\n", a);
        return 0;
    }
    printf("%f\n", calc(a, b));
    return 0;
}
