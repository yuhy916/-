/*
����Ŀ������
���������߾���������M��N��M��N��С��100λ�������������߾������Ļ���

�����롿
���������߾���������M��N��

�������
���������߾������Ļ���

������������
36
3
�����������
108
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char al[110], bl[110];
	while (cin >> al >> bl)
	{
		int a[110] = {0}, b[110] = {0}, c[10100] = {0};
		int la = strlen(al), lb = strlen(bl), lc = 0, x = 0;
		
		for (int i = 0; i < la; i++)
			a[la - i] = al[i] - 48;
			
		for (int i = 0; i < lb; i++)
			b[lb - i] = bl[i] - 48;
			
		for (int i = 1; i <= la; i++)
		{
			x = 0;
			for (int j = 1; j <= lb; j++)
			{
				c[i + j - 1] = a[i] * b[j] + x + c[i + j - 1];
				x = c[i + j - 1] / 10;
				c[i + j - 1] %= 10;
			}
			c[i + lb] = x;
		}
		
		lc = la + lb;
		
		while (c[lc] == 0 && lc > 1)
			lc--;
		
		for (int i = lc; i > 0; i--)
			cout << c[i];
		
	} 
	return 0;
}
