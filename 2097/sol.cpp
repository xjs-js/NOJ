#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    __int64 T;
    scanf("%I64d", &T);

    while(T--)
    {
        __int64 a,b;
        scanf("%I64d%I64d", &a, &b);
        printf("%I64d\n", a+b);
    }
}
