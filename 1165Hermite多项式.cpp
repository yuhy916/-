/*
����Ŀ������
�õݹ�ķ�����Hermite����ʽ��ֵ



�Ը�����x��������n�������ʽ��ֵ��

�����롿
������n��������x��

�������
����ʽ��ֵ��

������������
1 2
�����������
4.00
*/
#include <iostream>
#include <cstdio>
using namespace std;

double h(int n, double x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2 * x;
	if (n > 1)
		return 2 * x * h(n-1, x) - 2 * (n - 1) * h(n-2, x);
}

int main()
{
	int n;
	double x;
	while (cin >> n >> x)
	{
		printf("%.2lf\n", h(n, x));
	}
	return 0;
}
