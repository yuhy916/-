/*
����Ŀ������
��֪



�õݹ麯����⡣

�����롿
��һ����x��ֵ���ڶ�������n��ֵ��

�������
����ֵ��

������������
1 2
�����������
0.40
*/
#include <iostream>
#include <cstdio>
using namespace std;

double f(double x, int n)
{
	if (n == 1)
		return x / (1 + x);
	return x / (n + f(x, n-1));
}

int main()
{
	double x;
	int n;
	while (cin >> x >> n)
	{
		printf("%.2f\n", f(x, n));
	}
	return 0;
}
