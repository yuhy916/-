/*
����Ŀ������
����һ���ԡ������������ַ��������������

�����롿
��������

�������
��������

������������
abc!
�����������
cba
*/
#include <iostream>
#include <cstring>
using namespace std;

int rev(char * c)
{
	int l = strlen(c);
	if (*c == '!')
		return 0;
	rev(c+1);
	cout << *c;
	return 0;
}
int main()
{
	char c[1000000];
	while (cin >> c)
	{
		rev(c);	
		cout << endl;	
	}
	return 0;	
}
