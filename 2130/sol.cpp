#include <stdio.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
#define abs(x) ((x)<0?-(x):(x))
#define INT_MAX 0x7fffffff
#define INT_MIN 0x80000000
int main()
{
    int min_n = INT_MAX;
    int max_n = INT_MIN;
    int n,t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        min_n = min(min_n, t);
        max_n = max(max_n, t);
    }
    printf("%d\n", abs(min_n-max_n));
    return 0;
}