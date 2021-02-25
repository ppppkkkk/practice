
//P18_A1042
#include <cstdio>
const int N = 54;//c中是常变量，c++中是常量必须且可以直接赋值
char mp[5] = {'S','H','C','D','J'};
int start[N + 1], end[N + 1], next[N + 1];
int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= N; i++)
		start[i] = i;
	for (int i = 1; i <= N; i++)
		scanf("%d", &next[i]);
	for (int step = 0; step < n; step++)
	{
		for (int i = 1; i <= N; i++)
			end[next[i]] = start[i];
		for (int i = 1; i <= N; i++)
			start[i] = end[i];
	}
	for (int i = 1; i <= N; i++)
	{
		if (i != 1) printf(" ");
		start[i]--;
		printf("%c%d", mp[start[i] / 13], start[i] % 13 + 1);
	}
	return 0;
}

