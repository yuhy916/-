/*
����Ŀ������
�������������������Ĳ

�����롿
��2�У���1���Ǳ�����a����2���Ǽ���b(a > b)��ÿ��������������200λ�������ж����ǰ���㡣

�������
һ�У�������Ĳ

������������
9999999999999999999999999999999999999
9999999999999
�����������
9999999999999999999999990000000000000
*/
#include  <iostream>
#include <cstring>
using namespace std;

int init(int * a)
{
	string s;
	cin >> s;
	a[0] = s.length();
	for (int i = 1; i <= a[0]; i++)
		a[i] = s[a[0] - i] - '0';
	
	return 0;
}

int sub(int * a, int * b)
{
	for (int i = 1; i <= a[0]; i++)
	{
		if (a[i] < b[i])
		{
			a[i] += 10;
			a[i+1]--;
		}
		a[i] -= b[i];
	}
	while (a[a[0]] == 0 && a[0] > 1)
		a[0]--;
	return 0;
}

int main()
{
	int a[210] = {0}, b[210] = {0};
	init(a);
	init(b);
	sub(a, b);
	
	for (int i = a[0]; i > 0; i--)
		cout << a[i];
	cout << endl;
	return 0;
}
