/*
����Ŀ������
��֪������k����2��k��9���ָ����������Ϊ30λ��ʮ���ƷǸ�����c��������������c��k��

�����롿
һ���Ǹ�����c��c��λ����30��

�������
���������� c%k == 0 ��k����С�����������������k������������֮���õ����ո��������û��������k�������"none"��

������������
30
�����������
2 3 5 6
*/
#include <iostream>
#include <cstring>
using namespace std;

int init(int *a)
{
	string s;
	cin >> s;
	a[0] = s.length();
	for (int i = 1; i <= a[0]; i++)
		a[i] = s[i-1] - '0';
	return 0;
}

int mod(int *a, int b, int *c)
{
	int x = 0;
	for(int i = 1; i <= a[0]; i++)
	{
		c[i] = (10 * x + a[i]) / b;
		x = (10 * x + a[i]) % b;
	}
	c[0] = a[0];
	while (c[c[0]] == 0 && c[0] > 1)
		c[0]--;
	return x;
}

int main()
{
	int a[32] = {0}, c[32] = {0}, t[10] = {0}, n = 0;
	init(a);
	for (int k = 2; k <= 9; k++)
	{
		memset(c, 0, sizeof(c));
		if (mod(a, k, c) == 0)
			t[n++] = k;
	}
	if (n == 0)
		cout << "none"; 
	for (int i = 0; i < n; i++)
	{
		cout << t[i];
		if (i < n-1)
			cout << " ";
	}
	cout << endl;
	return 0;
}
