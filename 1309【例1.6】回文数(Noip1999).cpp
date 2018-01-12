/*
����Ŀ������
��һ��������λ��Ϊ�㣩�������Ҷ���������������һ�������Ǿͽ����֮Ϊ�����������磺����һ�� 10������ 56���� 56�� 65������56��������������õ� 121��һ�������������磬����10������87��

STEP1�� 87��78= 165 STEP2�� 165��561= 726

STEP3�� 726��627��1353 STEP4��1353+3531=4884

�������һ����ָ������һ��N���Ƶļӷ���������������4���õ�������4884��

дһ�����򣬸���һ��N��2��N����10��N=16�������� M�������پ����������Եõ��������������30�����ڣ�����30���������ܵõ����������������Impossible�� ��

�����롿
����һ��N��2��N����10��N=16��������M��

�������
���ټ����������30�����ڣ�����30���������ܵõ����������������Impossible����

������������
9 87
�����������
6
*/
#include <iostream>
#include <cstring>
using namespace std;

int init(int * a)
{
	string s;
	cin >> s;
	a[0] = s.length();
	for (int i = 1; i <= a[0]; i++)
	{
		if (s[a[0] - i] >= '0' && s[a[0] - i] <= '9')
			a[i] = s[a[0] - i] - '0';
		else
			a[i] = s[a[0] - i] - 'A' + 10;
	}
	return 0;
}

int isHW(int * a)
{
	for (int i = 1; i <= a[0]; i++)
		if (a[i] != a[a[0] - i + 1])
			return 0;
	return 1;
}

int rev(int *a, int *b)
{
	memset(b, 0, sizeof(b));
	b[0] = a[0];
	for (int i = 1; i <= a[0]; i++)
		b[i] = a[a[0] - i + 1];
	return 0;
}

int add(int *a, int *b, int n)
{
	int l = a[0] > b[0] ? a[0] : b[0];
	for (int i = 1; i <= l; i++)
	{
		a[i] += b[i];
		
		a[i+1] += a[i] / n;
		a[i] %= n; 
	}
	
	a[0] = a[l+1] > 0 ? l + 1 : l;
	return 0;
}

int main()
{
	int m[1000] = {0}, t[1000] = {0}, n, step = 0;
	cin >> n;
	init(m);
	
	while (step <= 30)
	{	
		if (isHW(m))
			break;
		rev(m, t);
		add(m, t, n);
		step++;
	}
	if (step > 30)
		cout << "Impossible" << endl;
	else
		cout << step << endl;
	
	return 0;
}
