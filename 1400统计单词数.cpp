/*
����Ŀ������
һ����ı��༭�����в��ҵ��ʵĹ��ܣ��ù��ܿ��Կ��ٶ�λ�ض������������е�λ�ã��еĻ���ͳ�Ƴ��ض������������г��ֵĴ�����

���ڣ�������ʵ����һ���ܣ�����Ҫ���ǣ�����һ�����ʣ�����������ڸ����������г��ֵĴ����͵�һ�γ��ֵ�λ�á�ע�⣺ƥ�䵥��ʱ�������ִ�Сд����Ҫ����ȫƥ�䣬���������ʱ����������е�ĳһ���������ڲ����ִ�Сд���������ȫ��ͬ���μ�����1��������������ʽ���������ĳһ���ʵ�һ��������ƥ�䣨�μ�����2����

�����롿
�� 1 ��Ϊһ���ַ���������ֻ����ĸ����ʾ�������ʣ�

�� 2 ��Ϊһ���ַ���������ֻ���ܰ�����ĸ�Ϳո񣬱�ʾ���������¡�

�������
ֻ��һ�У�������������ҵ��������������������������������֮����һ���ո�������ֱ��ǵ����������г��ֵĴ����͵�һ�γ��ֵ�λ�ã����������е�һ�γ���ʱ����������ĸ�������е�λ�ã�λ�ô�0��ʼ�������������������û�г��֣���ֱ�����һ������-1��

������������
To
to be or not to be is a question
�����������
2 0
����ʾ��
��������:

���� #2��

to

Did the Ottoman Empire lose its power at that time

�������:

���� #2��

-1

���ݷ�Χ
1�� ���ʳ��ȡ�10�� 
1�� ���³��ȡ�1,000,000��
*/
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

// ע�⣺strlwr()��strupr()���Ǳ�׼�⺯����ֻ����windows�£�VC��MinGW�ȣ�ʹ�ã�Linux GCC����Ҫ�Լ����塣
char *strupr(char *str)
{
	char *orign = str;
	for (; *str != '\0'; str++)
	*str = tolower(*str);
	return orign;
}
	
int main()
{
	const int N = 1000000 + 10;
	char w[20], t[N];
	char b[20] = {0};
	int n = 0;
	int p = 0, num = 0, flag = 0;
	int lw = 0, lt = 0;

	cin >> w;
	getchar();
	gets(t);

	// ��w,tͬʱת�ɴ�д	
	strupr(w); 
	strupr(t); 
	
	lw = strlen(w);
	lt = strlen(t);
	
//	for (int i = 0; i < lw; i++)
//        if(isalpha(w[i]) && w[i] >= 'A' && w[i] <= 'Z')
//            w[i] = 'a' + w[i] - 'A';
//    for (int i = 0; i < lt; i++)
//        if(isalpha(t[i]) && t[i] >= 'A' && t[i] <= 'Z')
//            t[i] = 'a' + t[i] - 'A';


//	����һ 
	for (int i = 0; i < lt + 1; i++)
	{
		if (t[i] != ' ' && t[i] != '\0')
		{
			b[n++] = t[i]; // ������Կո�
		}
		else
		{
			if (strcmp(b, w) == 0)
			{
				if (num == 0)
				{
					p = i - lw;
				}
				num++;
			}
			memset(b, 0, sizeof(b));
			n = 0;
		}
	}

// ������ 
//	for (int i = 0; i < lt; i++)
//	{
//		int j;
//		for (j = 0; j < lw; j++)
//		{
//			flag = 1;
//			if (t[i+j] != w[j])
//			{
//				flag = 0;
//				break;
//			}
//			
//		}
//		
//		if (flag)
//		{
//			// ��ͷ
//			if (i == 0 && t[i+j] == ' ')
//			{
//				num++;
//			} 
//			// ��β 
//			else if (i + j == lt && t[i-1] == ' ')
//			{
//				num++;
//			}
//			// �м� 
//			else if (t[i-1] == ' ' && t[i+j] == ' ')
//			{
//				num++;
//			}
//			else
//			{
//				continue;
//			}
//			if (num == 1)
//			{
//				p = i;
//			}
//		}
//	}

	if (num)
	{
		cout << num << " " << p << endl;
	}
	else
	{
		cout << -1 << endl;
	}
	
	return 0;
}

