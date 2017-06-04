#include <stdio.h>
int main(){
  __int64 l, r;
  scanf("%I64d%I64d", &l, &r);
  if (l == r) printf("%d\n", l);
  else        printf("2\n");
  return 0;
}