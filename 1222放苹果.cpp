/*
����Ŀ������
��M��ͬ����ƻ������N��ͬ��������������е����ӿ��Ų��ţ��ʹ��ж����ֲ�ͬ�ķַ�������K��ʾ��5��1��1��1��5��1 ��ͬһ�ַַ���

�����롿
��һ���ǲ������ݵ���Ŀt��0 �� t �� 20��������ÿ�о�������������M��N���Կո�ֿ���1��M��N��10��

�������
�������ÿ������M��N����һ�������Ӧ��K��

������������
1
7 3
�����������
8
*/
#include <iostream>
#include <cstring>
using namespace std;

int t, m, n, num = 0, a[20] = {0};

int solve(int x, int s)
{
	if (s == m && x <= n + 1)
	{
		num++;
		return 0;
	}
	else if (s > m || x > n + 1)
		return 0;
	
	for (int i = 1; i <= m; i++)
	{
		if (a[x-1] > i)
			continue;
		a[x] = i;
		solve(x + 1, s + a[x]);
	}
	return 0;
}

int main()
{
	cin >> t;
	while (t)
	{
		cin >> m >> n;
		num = 0; 
		memset(a, 0, sizeof(20));
		solve(1, 0);
		cout << num << endl;
		t--;
	}
	return 0;
}
