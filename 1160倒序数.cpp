/*
����Ŀ������
����һ���Ǹ����������������ĵ���������������123�����321��

�����롿
����һ���Ǹ�����(��֤��λ��Ϊ�㣩��

�������
������������

������������
123
�����������
321
*/
#include <iostream>
using namespace std;

int rev(int n)
{
	if (n == 0)
		return 0;
	cout << n % 10;
	rev(n / 10);
	return 0;
}
int main()
{
	int n;
	while (cin >> n)
	{
		rev(n);
		cout << endl; 
	}
	return 0;
}
