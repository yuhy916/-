/*
��Ŀ������
����n���������������Ƿ��飬ʹ��ÿ�����������������ʡ�����Ҫ�ֳɶ��ٸ��飿

�����롿
��һ����һ��������n��1 �� n �� 10��

�ڶ�����n��������10000����������

�������
һ������������������Ҫ��������

������������
6
14 20 33 117 143 175
�����������
3
*/
#include <iostream>
using namespace std;

int n, num = 0;
int a[15] = {0}, b[15] = {0};

int gcd(int a, int b)
{
	int maxn = a > b ? a : b;
	int  minn = a < b ? a : b;
	
	if (minn == 0)
		return maxn;
	else
		return gcd(minn, maxn % minn);
}

int solve(int * a, int n)
{
	if (n == 0)
		return 0;
		
	int nb = 0;
	int c[15] = {0};
	
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (!c[i] && gcd(a[i], a[j]) != 1 && !c[j])
			{
				b[nb++] = a[j];
				c[j] = 1;
			}

	num++;
	solve(b, nb);
	return 0; 
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	solve(a, n);
	cout << num << endl;
	return 0;
}
