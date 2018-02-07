/*
����Ŀ������
������n(1��n��200)������ͬ��������ɵ����У���Ϊ:b(1)��b(2)��������b(n)��b(i)��b(j)(i��j)��������i1<i2<i3<��<ie ����b(i1)<b(i2)<��<b(ie)���Ϊ����Ϊe�Ĳ��½����С�����Ҫ�󣬵�ԭ���г�֮�������Ĳ��½����С�

����13��7��9��16��38��24��37��18��44��19��21��22��63��15������13��16��18��19��21��22��63����һ������Ϊ7�Ĳ��½����У�ͬʱҲ��7 ��9��16��18��19��21��22��63��ɵĳ���Ϊ8�Ĳ��½����С�

�����롿
��һ��Ϊn,�ڶ���Ϊ�ÿո������n��������

�������
��һ��Ϊ���������max(��ʽ������)��

�ڶ���Ϊmax�������γɵĲ��½�����,�𰸿��ܲ�Ψһ�����һ�־Ϳ����ˣ���������������⡣

������������
14
13 7 9 16 38 24 37 18 44 19 21 22 63 15
�����������
max=8
7 9 16 18 19 21 22 63
*/
#include <iostream>
using namespace std;

const int N = 210, INF = 9999999;
int maxn, ri;
int a[N], r[N], dp[N]; // dp[i]:=��a[i]Ϊ��β������½�������

int solve()
{
	int res = 0;
	for (int i = 0; i < maxn; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
			if (a[j] <= a[i])
				dp[i] = max(dp[i], dp[j] + 1);
//		res = max(res, dp[i]);
		if (dp[i] > res)
			res = dp[i], ri = i;
	}
	return res;
}

int main()
{
	cin >> maxn;
	for (int i = 0; i < maxn; i++)
		cin >> a[i];
	int res = solve();
	cout << "max=" << res << endl;

	fill(r, r+res+1, INF);
	
	int num = res;
	while (num)
	{
		for (int i = ri; i >= 0; i--)
			if (dp[i] == num && a[i] <= r[num])
			{
				r[num-1] = a[i];
				ri = i-1;
				break;
			}
		num--;
	}

	for (int i = 0; i < res; i++)
	{
		cout << r[i];
		if (i < res - 1)
			cout << " ";
	}
	cout << endl;
	return 0;
}
