/*
����Ŀ������
�����2��n(nΪ����2��������)���ж��ٸ�������

�����롿
����n(2��n��50000)��

�������
����������

������������
10
�����������
4
*/
#include <iostream>
using namespace std;

int isP(int n)
{
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	int num = 0;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (isP(i))
		{
			num++;
		}
	}
	cout << num << endl;
	return 0;
}
