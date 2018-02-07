/*
����Ŀ������
����һ��n����ֵ�Ļ���ϵͳ���������ֵΪm�Ļ����ж����ַ�����

�����롿
��һ��Ϊn��m��

�������
һ�У���������

������������
3 10        //3����ֵ�����ֵΪ10�ķ���
1           //��ֵ1
2           //��ֵ2
5           //��ֵ5
�����������
10          //��10�ַ���
*/
#include <iostream>
using namespace std;

const long long N = 1000000;
long long n, m;
long long a[N], dp[N];

int main()
{
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	
	dp[0] = 1;
	for (long long i = 1; i <= n; i++)
		for (long long j= a[i]; j <= m; j++)
			dp[j] += dp[j-a[i]];
	
	cout << dp[m] << endl;
	return 0;
}
