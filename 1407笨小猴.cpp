/*
����Ŀ������
��С��Ĵʻ�����С������ÿ����Ӣ��ѡ�����ʱ�򶼺�ͷ�ۡ��������ҵ���һ�ַ�����������֤���������ַ���ȥѡ��ѡ���ʱ��ѡ�Եļ��ʷǳ���

���ַ����ľ����������£�����maxn�ǵ����г��ִ���������ĸ�ĳ��ִ�����minn�ǵ����г��ִ������ٵ���ĸ�ĳ��ִ��������maxn-minn��һ����������ô��С�����Ϊ���Ǹ�Lucky Word�������ĵ��ʺܿ��ܾ�����ȷ�Ĵ𰸡�

�����롿
ֻ��һ�У���һ�����ʣ�����ֻ���ܳ���Сд��ĸ�����ҳ���С��100��

�������
�����У���һ����һ���ַ�������������ĵĵ�����Lucky Word����ô�����Lucky Word�������������No Answer����

�ڶ�����һ��������������뵥����Lucky Word�����maxn-minn��ֵ���������0��

������������
error
�����������
Lucky Word
2
����ʾ��
��������:

���� #2��

olympic

�������:

���� #2��

No Answer

0
*/
#include <iostream>
#include <cstring>
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
	char c[110];
	
	while (cin >> c)
	{
		int a[26] = {0};
		int max = 0, min = 110, l;
		
		l = strlen(c);
		for (int i = 0; i < l; i++)
			a[c[i] - 'a']++;
			
		for (int i = 0; i < 26; i++)
		{
			if (a[i] == 0)
				continue;
			
			max = max >= a[i] ? max : a[i];
			min = min <= a[i] ? min : a[i];
			
		}
		if (isP(max - min))
		{
			cout << "Lucky Word" << endl;
			cout << max - min << endl;
		}
		else
		{
			cout << "No Answer" << endl;
			cout << 0 << endl;
		}
	}
	return 0;
}
