/*
����Ŀ������
�õݹ��㷨��һ��ʮ������Xת�������������M��M��16����

�����롿
һ������������һ��ʮ������X���ڶ���Ϊ����M��

�������
��������

������������
31 16 ����ʮ����31ת��Ϊʮ����������
�����������
1F
*/
#include <iostream>
using namespace std;

int toM(int n, int m)
{
	char t;
	if (n == 0)
		return 0;
	
	toM(n / m, m);
	
	if (n % m >= 10)
	{
		t = n % m - 10 + 'A';
		cout << t;
		return 0;
	}
	cout << n % m;
	return 0;
}

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		toM(n, m);
		cout << endl;
	}
	return 0;
}
