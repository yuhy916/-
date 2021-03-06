/*
【题目描述】
一个数的序列bi，当b1<b2<...<bS的时候，我们称这个序列是上升的。对于给定的一个序列(a1,a2,...,aN)，我们可以得到一些上升的子序列(ai1,ai2,...,aiK)，这里1≤i1<i2<...<iK≤N。比如，对于序列(1,7,3,5,9,4,8)，有它的一些上升子序列，如(1,7),(3,4,8)等等。这些子序列中最长的长度是4，比如子序列(1,3,5,8)。

你的任务，就是对于给定的序列，求出最长上升子序列的长度。

【输入】
输入的第一行是序列的长度N(1≤N≤1000)。第二行给出序列中的N个整数，这些整数的取值范围都在0到10000。

【输出】
最长上升子序列的长度。

【输入样例】
7
1 7 3 5 9 4 8
【输出样例】
4
*/
#include <iostream>
using namespace std;

const int N = 1010;
int n, a[N], dp[N];


int solve()
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		res = max(res, dp[i]);
	}
	return res;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << solve() << endl; 
	return 0;
}
