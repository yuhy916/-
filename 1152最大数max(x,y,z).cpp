/*
����Ŀ������
��֪:

m=max(a,b,c)/(max(a+b,b,c)��max(a,b,b+c))
����a,b,c����m�������������������max(x,y,z)�ֱ���ɺ����͹���������

�����롿
����a,b,c��

�������
��m��������С�������λ��

������������
1 2 3
�����������
 0.200
*/
#include <iostream>
#include <cstdio>
using namespace std;

float max(int x, int y, int z)
{
	int max = 0;
	max = x > y ? x : y;
	max = max > z ? max : z;
	return max;
}

int main()
{
	int a, b, c;
	float m;
	cin >> a >> b >> c;
	m = max(a, b, c) / (max(a+b, b, c) * max(a, b, b+c));
	printf("%.3f\n", m);
	return 0;
}
