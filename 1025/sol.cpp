// 2017-6-2
#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n) != -1) {
        printf("%d:", n);
        if (n >= 6)  printf(" 6");
        if (n >= 28) printf(" 28");
        if (n >= 496) printf(" 496");
        if (n >= 8128) printf(" 8128");
        printf("\n");
    }
    return 0;
}
