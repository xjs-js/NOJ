#include <cstdio>

const int maxn = 200000;

struct Point
{
    __int64 x;
    __int64 y;
} point[maxn];
int main()
{
    int relt = 0;
    int n;
    __int64 x,y;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%I64d%I64d", &point[i].x, &point[i].y);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (point[i].x == point[j].x || point[i].y == point[j].y)
            {
                relt += 1;
            }
        }
    }
    printf("%d\n", relt);
}
