/*
����Ŀ������
����һ���ַ������Իس��������ַ������ȡ�200�������ַ��������ɸ�������ɣ�����֮����һ���ո���������е������ִ�Сд������Ҫ�����е�ĳ�������滻����һ�����ʣ�������滻֮����ַ�����

�����롿
��1���ǰ���������ʵ��ַ��� s��

��2���Ǵ��滻�ĵ���a(���� �� 100)��

��3����a�����滻�ĵ���b(���� �� 100)��

s,a,b��ǰ�������涼û�пո�

�������
���ֻ�� 1 �У���s�����е���a�滻��b֮����ַ�����

������������
You want someone to help you
You
I
�����������
I want someone to help you
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char s[220], a[110], b[110];
	char t[110] = {0};
	int p[220] = {0};
	int ls, la, lb, n = 0;
	
	gets(s);
	gets(a);
	gets(b);
	
	ls = strlen(s);
	la = strlen(a);
	lb = strlen(b);
	
	for (int i = 0; i < ls + 1; i++)
	{
		if (s[i] != ' ' && s[i] != '\0')
		{
			t[n++] = s[i]; // ������Կո�
		}
		else
		{
			if (strcmp(t, a) == 0)
			{
				p[i - la] = 1;
			}
			memset(t, 0, sizeof(t));
			n = 0;
		}
	}
	
	for (int i = 0; i < ls  + 1; i++)
	{
		if (p[i])
		{
			for (int j = 0; j < lb; j++)
			{
				t[n+j] = b[j];
			}
			n += lb;
			i += la;
		}
		t[n++] = s[i];			
	}
	
	cout << t << endl;
	
	return 0;
}
