

//P9_B1026
#include <stdio.h>
int main()
{
	int c1, c2;
	scanf("%d%d",&c1,&c2);
	int ans = c1 - c2;
	if (ans % 100 >= 50) {
		ans = ans / 100 + 1;
	}
	else {
		ans = ans / 100;
	}
	printf("%02d%:%02d:02d\n",ans/3600,ans%3600/60,ans&3600%60);//书中这里出现错误
	return 0;
}

