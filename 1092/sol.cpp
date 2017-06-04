// 2017-6-2

#include <stdio.h>
#include <math.h>

int main()
{
    const double pi = acos(-1.0);

    double r, h, s1, s2, s;

    int cnt = 1;
    while((scanf("%lf%lf", &r, &h)) && r && h) {
        s1 = 2 * pi * r * r;
        s2 = 2 * pi * r * h;
        s = s1 + s2;
        printf("Case %d:", cnt++);
        printf("%.2f\n", s);
    }
}