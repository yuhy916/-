/*
��������2��n֮�����ȫ��

ʱ������: 1000 ms         �ڴ�����: 65536 KB
�ύ��: 992     ͨ����: 591 
����Ŀ������
��������2��n֮�����ȫ��(һ��һ����)��

��ȫ��������֮�͵������������Ȼ������6=1+2+3

�����롿
����n��

�������
һ��һ����,����С�����˳��

������������
7
�����������
6
*/
#include <iostream>
using namespace std;

int isWQ(int n)
{
	int s = 1;
	
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i != n / i)
			{
				s += n / i;
			}
			s += i;
		}
	}
	if (s == n) 
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if(isWQ(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}
