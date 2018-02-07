/*
����Ŀ������
���ǳ�����Z=<z1,z2,...,zk>������X=<x1,x2,...,xm>�������е��ҽ��������ϸ�����������<i1,i2,...,ik>��ʹ�ö�j=1,2,...,k,��xij=zj������Z=<a,b,f,c> ��X=<a,b,c,f,b,c>�������С�

���ڸ�����������X��Y������������ҵ�X��Y����󹫹������У�Ҳ����˵Ҫ�ҵ�һ���������Z��ʹ��Z����X��������Ҳ��Y�������С�

�����롿
�����������������ݡ�ÿ�����ݰ���һ�У������������Ȳ�����200���ַ�������ʾ�������С������ַ���֮�������ɸ��ո������

�������
��ÿ���������ݣ����һ�У������������е���󹫹������еĳ��ȡ�

������������
abcfbc abfcab
programming contest 
abcd mnp
�����������
4
2
0
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 210;
int m = 0, n = 0, dp[N][N]; 
// dp[i][j]:=����Ϊi��a�����볤��Ϊj��b���е���󹫹������еĳ��� 
char a[N], b[N];

int solve()
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i] == b[j])
				dp[i+1][j+1] = dp[i][j] + 1;
			else
				dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);	
	return 0;
} 

int main()
{
	while(cin >> a >> b)
	{
		memset(dp, 0, sizeof(dp));
		m = strlen(a), n = strlen(b);
		solve();
		cout << dp[m][n] << endl;
	}
	
	return 0;
}
