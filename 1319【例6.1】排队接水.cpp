/*
����Ŀ������
��n������һ��ˮ��ͷǰ�Ŷӽ�ˮ������ÿ���˽�ˮ��ʱ��ΪTi�������ҳ���n�����Ŷӵ�һ��˳��ʹ��n���˵�ƽ���ȴ�ʱ����С��

�����롿
�����У���һ��Ϊn(1��n��1000)���ڶ��зֱ��ʾ��1���˵���n����ÿ�˵Ľ�ˮʱ��T1��T2������Tn��ÿ������֮����1���ո�

�������
�����У���һ��Ϊһ���Ŷ�˳�򣬼�1��n��һ�����У��ڶ���Ϊ�������з����µ�ƽ���ȴ�ʱ��(��������ȷ��С�������λ)��

������������
10							
56 12 1 99 1000 234 33 55 99 812
�����������
3 2 7 8 1 4 9 6 10 5
291.90
*/
#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1100;
int n, t[N], b[N] = {0}, tmp = 0, flag = 1;
float ave = 0.0;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		b[i] = i + 1;
	}
	for (int i = 0; i < n && flag; i++)
	{
		flag = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (t[j] <= t[j+1])
			{
				tmp = t[j];
				t[j] = t[j+1];
				t[j+1] = tmp;
				tmp = b[j];
				b[j] = b[j+1];
				b[j+1] = tmp;
				flag = 1;
			}
		}			
	}
	
	for (int i = 0; i < n; i++)
		ave += (n - i - 1) * t[n-i-1];
		
	for (int i = n - 1; i >= 0; i--)
	{
		cout << b[i];
		if (i > 0)
			cout << " ";
	}
	printf("\n%.2f\n", ave / n);
	
	return 0;
}
