/*
����Ŀ������
�õݹ�ķ�����1+2+3+����+N��ֵ��

�����롿
����n��

�������
����͡�

������������
5
�����������
15
*/
#include <iostream>
using namespace std;

int sum(int n)
{
	if (n == 1)
		return 1;
	return sum(n-1) + n;
}
int main()
{
	int n;
	while (cin >> n)
	{
		int s = sum(n);
		cout << s << endl;
	}
	return 0;
}
