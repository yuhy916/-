/*
����Ŀ������
���һ����Ȼ��������,����������λ�þ����Ի�����Ϊ����,���Ϊ��������,����13����������ж�λ����������

�����롿
���ޣ�

�������
���ж�λ������������С����һ����һ�У���

������������
���ޣ�
�����������
���ޣ�
*/
#include <iostream>
using namespace std;

int isP(int n)
{
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int isJP(int n)
{
	int i;
	if (isP(n))
	{
		n = n / 10 + n % 10 * 10;
	
		if(isP(n))
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	for (int i = 10; i < 100; i++)
	{
		if (isJP(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}
