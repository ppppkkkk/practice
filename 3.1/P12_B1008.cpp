//P12_B1008
#include <stdio.h>
int main() 
{
	int a[120];
	int n, m, count = 0;
	scanf("%d%d",&n,&m);
	m = m % n;//注意m不一定小于n
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for (int i = n - m; i < n; i++)
	{
		printf("%d",a[i]);
		count++;
		if (count < n)  printf(" ");
	}
	for (int i = 0; i < n - m;i++)
	{
		printf("%d", a[i]);
		count++;
		if (count < n)  printf(" ");
	}
		
	return 0;
}
