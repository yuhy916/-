/*
����Ŀ������
���������ĺ���S�����ǵĻ�����Ƕ��٣�

�����롿
һ��������10000��������S��Ϊ���������ĺ͡�

�������
һ��������Ϊ�������������˻������ݱ�֤�н⡣

������������
50
�����������
589
*/
#include <iostream>
using namespace std;

int isP(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int s;
	int max;
	while (cin >> s)
	{
		max = 0;
		for (int i = s / 2 + 1; i >= 2; i--)
		{
			if (isP(i) && isP(s - i))
			{
				if (max > i * (s - i))
					break;
				max = i * (s - i);
			}
		}
		cout << max << endl;
	}
	return 0;
}
