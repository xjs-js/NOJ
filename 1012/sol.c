#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void myitoa(int n, int base, char *buf)
{
    div_t dv = {.quot=n};
    char *p = buf;
    do{
        dv = div(dv.quot, base);
        *p++ = "0123456789ABCDEF"[abs(dv.rem)];
    } while(dv.quot);
    if(n < 0) *p++ = '-';
    *p-- = '\0';
    while(buf < p) {
        char c = *p;
        *p-- = *buf;
        *buf++ = c;
    }
}


int main(void)
{
    int T;
    scanf("%d", &T);
    char buf[100];
    while(T--)
    {
        int n, base;
        scanf("%d%d", &n, &base);    
        myitoa(n, base, buf);
        printf("%s\n", buf);
    }
    return 0;    
}
