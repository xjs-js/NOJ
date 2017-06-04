// 2017-6-2

#include <stdio.h>

int main()
{
    int n, year;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &year);
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}