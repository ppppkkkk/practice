//P6_B1011
#include <stdio.h>
int main()
{
	int T;
	int Tcase = 1;
	scanf("%d", &T);
	while (T--)
	{
		long long a, b, c;
		scanf("%lld%lld%lld%",a,b,c);
		if (a + b > c)
		{
			printf("Case #%d:true",Tcase++);
		}
		else printf("Case #%d:false",Tcase++);

	}
	return 0;
}
