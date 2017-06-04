// 2017-6-2

#include <stdio.h>

int main()
{
    int t;
    int m, n;
    int relt;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d", &n, &m);
        relt = m / 2 - n;
        if (relt < 0 || m % 2 == 1)
            printf("Case %d: No answer\n", i + 1);
        else
            printf("Case %d: %d\n", i + 1, relt);
    }
    return 0;
}