/*
����Ŀ������
��λ�������ļ��������㣨ֻ�����������㣩����������Ϊ��

+���ӷ����㣻

-���������㣻

*���˷����㣻

/���������㣻

%��ȡ�����㡣

�������ʽ�ĸ�ʽΪ�������ǰ������пո񣩣�

������ ����� ������

�������Ӧ�Ľ����

�����롿
һ���������ʽ��

�������
������������Ľ�������ֵ��һ��Ϊ2λ�������ܶ���2λ������2λ����

������������
32+64
�����������
96
*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, result;
	char c;
	cin >> a >> c >> b;
	
	switch(c)
	{
		case '+':
			result = a + b;
			break;
		case'-':
			result = a - b;
			break;
		case'*':
			result = a * b;
			break;
		case'/':
			result = a / b;
			break;
		case'%':
			result = a % b;
			break;
		default:
			break;
	}
	
	cout << result << endl;
	return 0;
}
