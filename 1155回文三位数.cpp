/*
����Ŀ������
���һ��������߶��ʹ��ұ߶�����ͬһ�������ͳ�Ϊ������������6886����һ����������������еļ��ǻ�����������������λ����

�����롿
(�ޣ�

�������
���еļ��ǻ�����������������λ����һ����һ�С�

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

int isHW(int n)
{
	return n / 100 == n % 10 ? 1 : 0;
}

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		if (isP(i) && isHW(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}
