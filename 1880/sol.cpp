// 2017-6-3

#include <stdio.h>
int main()
{
    int t, n;
    int i = 0;
    int ans = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &t);
        ans = ans ^ t;
    }
    printf("%d\n", ans);
    return 0;
}