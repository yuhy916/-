/*
����Ŀ������
��10000����n�Ľ׳ˡ�

�����롿
ֻ��һ�����룬����n��0��n��10000����

�������
һ�У���n!��ֵ��

������������
4
�����������
24
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int mul(int *a, int b)
{
	int x = 0;
	for (int i = 1; i <= a[0]; i++)
	{
		a[i] = a[i] * b + x;
		x = a[i] / 10000;
		a[i] %= 10000; 
	}
	if (x > 0)
	{
		a[a[0]+1] = x;
		a[0]++;
	}
	return 0;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int a[100000] = {0};
		a[0] = 1;
		a[1] = 1;
		for (int i = 2; i <= n; i++)
			mul(a, i);
		
		cout << a[a[0]];
		for (int i = a[0] - 1; i > 0; i--)
			printf("%.4d", a[i]);
		cout << endl;
	}
	return 0;
}
