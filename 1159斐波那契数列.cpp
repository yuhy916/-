/*
����Ŀ������
�õݹ麯�����쳲��������е�n�0,1��1��2��3��5��8��13����

�����롿
һ��������n,��ʾ��n�

�������
��n���Ƕ��١�

������������
3
�����������
1
*/
#include <iostream>
using namespace std;

int f(int n)
{
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	return f(n-1) + f(n-2);
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << f(n) << endl;
	}
	return 0;
}
