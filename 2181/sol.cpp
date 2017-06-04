#include <cstdio>
#include <string>
#include <cmath>

int a[16] = {1};

int calc(int n)
{
	int N = 15;
	int relt = 0;
	while(n != 0)
	{
		relt += (n % 2) * a[N--];
		n = n / 2;
	}
	return relt;
}

int main()
{
	for (int i = 1; i <= 15; i++)
		a[i] = pow(2, i);
 	int n,m;
	scanf("%d", &n);
	int max = -999, before = -999, temp;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		temp = calc(m);
		if (temp > max)
		{
			max = temp;
			before = m;
		}
	}
	printf("%d %d\n", max, before);
	return 0;
}


