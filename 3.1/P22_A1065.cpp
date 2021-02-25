
//P22_A1065

#include <stdio.h>
int main()
{
	int n;
	int tcase = 1;
	scanf("%d", &n);
	while (n--)
	{
		long long a, b, c;
		scanf("lld%lld%lld%", &a, &b, &c);
		long long sum = a + b;
		bool flag;
		if (a > 0 && b > 0 && sum < 0)flag = true; //正溢出
		else if (a < 0 && b < 0 && sum > 0)flag = false;//负溢出
		else if (sum > c)flag = true;
		else flag = false;
		if (flag = true) printf("Case #%d: true\n",tcase++);
		else printf("Case #%d: false\n", tcase++);
	}
	return 0;
}



