
//P20_A1046
#include <algorithm>
#include <cstdio>
const int MAX = 100005;
int dis[MAX], A[MAX];
using namespace std;
int main()
{
	int sum = 0, query, n, left, right;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
		dis[i] = sum;
	}
	scanf("%d", query);
	for (int i = 0; i < query; i++)
	{
		scanf("%d%d",&left,right);
		if (left > right)swap(left, right);
		int temp = dis[right - 1] - dis[left-1];
		printf("%d\n", min(temp, sum - temp));
	}
	return 0;
}




