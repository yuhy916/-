/*
����Ŀ������
��11��n֮�䣨����n���������������ǻ������������ж��ٸ���

�����롿
һ������11С��1000������n��

�������
11��n֮�������������������

������������
23
�����������
1
����ʾ��
��ʾ:

������ָ���ҶԳƵ������磺292��333��
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

int isHW(int n)
{
	if (n < 100)
	{
		// ��λ��
		return n / 10 == n % 10 ? 1 : 0;
	}
	// ��λ�� 
	return n / 100 == n % 10 ? 1 : 0;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int num = 0;
		for (int i = 11; i <= n; i++)
			if (isP(i) && isHW(i))
				num++;
		cout << num << endl;
	}
	return 0;
}
