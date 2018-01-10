/*
����Ŀ������
������������X��Y���������֮�����������������X��Y����

�����롿
��������X��Y��1 �� X,Y �� 105����

�������
���һ����������ʾX��Y֮�����������������X��Y����

������������
1 100
�����������
25
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

int main()
{
	int x, y;
	while(cin >> x >> y)
	{
		int num = 0;
		for (int i = x; i <= y; i++)
		{
			if (isP(i))
			{
				num++;
			}
		}
		cout << num << endl;
	}
	return 0;
}
