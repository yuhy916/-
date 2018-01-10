/*
����Ŀ������
������������������m,n(1<m<n��5000)���������m��n֮��ÿ���������������(����m��n�����ĳ������������������������������)��

�����롿
һ�У���������������m��n������Ե����ո�����

�������
һ�У�ÿ����������������ӣ��Զ��ż����

������������
5 10
�����������
5,3,7,2,3,5
*/
#include <iostream>
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

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		for (int i = m; i <= n; i++)
		{
			if (isP(i))
			{
				cout << i;
			}
			else
			{
				for (int j = i-1; j > 1; j--)
				{
					if (i % j == 0 && isP(j))
					{
						cout << j;
						break;
					}
				}
			}
			if (i != n)
			{
				cout << ',';
			}
		}
		cout << endl;
	}
	return 0;
}
