#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int cmp(int a, int b)
{
   return a > b;
}
int main()
{
   int n,k;
   scanf("%d%d", &n, &k);
   __int64 *p = new __int64[n];
   __int64 *d = new __int64[n];

   __int64 relt = 0;
   for(int i = 0; i < n; i++)
   {
       scanf("%I64d%I64d", &p[i], &d[i]);
       relt -= d[i];
       p[i] += d[i];
   }

   sort(p, p+n, cmp);

   for (int i = 0; i < k; i++)
       relt += p[i];

   printf("%I64d\n", relt);
}
