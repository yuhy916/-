/*
����Ŀ������
��Ȼ��a��������ָ������a��������Ȼ����������a��������12������Ϊ��1,2,3,4,6������Ȼ��a������֮��Ϊb������b������֮���ֵ���a�����a,bΪһ�ԡ��׺����� ������С��һ���׺���(a<>b)��

�����롿
(�ޣ�

�������
1�У��ֱ�Ϊa��b(a<b)��

������������
���ޣ�
�����������
���ޣ�
*/
#include <iostream>
using namespace std;

int sumY(int n)
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
	return s;
}

int main()
{
	int a, b;
	for (a = 2; ; a++)
	{
		b = sumY(a);
		if (sumY(b) == a && b > a)
		{
			break;
		}
	}
	cout << a << " " << b << endl;
	
	return 0;
}
