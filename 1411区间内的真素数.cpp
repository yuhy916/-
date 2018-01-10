/*
����Ŀ������
�ҳ�������M��N֮�䣨N��С��M����������������

�������Ķ��壺���һ��������PΪ���������䷴��ҲΪ��������ôP��Ϊ��������

���磬11��13��Ϊ����������Ϊ11�ķ�����Ϊ11��13�ķ���Ϊ31ҲΪ������

�����롿
����������M��N���ո�����1��M��N��100000��

�������
����С�������M��N֮�䣨����M��N���������������ż�������֮��û���������������No��

������������
10 35
�����������
11,13,17,31

*/
#include <iostream>
#include <cmath>
using namespace std;

int isP(int n)
{
	if (n <= 1)
		return 0;
	
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return 0;
	
	return 1;
}

int rev(int n)
{
	int a[10] = {0};
	int num = 0;
	int m = 0;
	
	while (n != 0)
	{
		a[num] = n % 10;
		n /= 10;
		num++;
	}
	
	for (int i = 0; i < num; i++)
	{
		m *= 10;
		m += a[i];
	}
	return m;
}

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		int num = 0, a[100010] = {0};
		for (int i = m; i <= n; i++)
		{
			if (isP(i) && isP(rev(i)))
			{
				a[num++] = i;
			}
		}
		for (int i = 0; i < num; i++)
		{
			cout << a[i];
			if(i != num - 1)
				cout << ",";
		}
		if (num == 0)
		{
			cout << "No";
		}
		cout << endl;
	}
	return 0;
}

