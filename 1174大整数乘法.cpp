/*
����Ŀ������
������������200λ�ķǸ������Ļ���

�����롿
�����У�ÿ����һ��������200λ�ķǸ�������û�ж����ǰ��0��

�������
һ�У�����˺�Ľ��������ﲻ���ж����ǰ��0������������342����ô�Ͳ������Ϊ0342��

������������
12345678900
98765432100
�����������
1219326311126352690000
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char al[210], bl[210];
	while (cin >> al >> bl)
	{
		int a[210] = {0}, b[210] = {0}, c[40100] = {0};
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
