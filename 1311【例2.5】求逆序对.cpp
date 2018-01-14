/*
����Ŀ������
����һ������a1,a2,��,an���������i<j����ai>aj����ô���ǳ�֮Ϊ����ԣ�������Ե���Ŀ��

�����롿
��һ��Ϊn,��ʾ���г��ȣ���������n�У���i+1�б�ʾ�����еĵ�i������

�������
���������������

������������
4
3
2
3
2
�����������
3
����ʾ��
N��105��Ai��105��
*/
#include <iostream>
#include <cstring>
using namespace std;

long long ans = 0;
long long a[100000] = {0}, r[100000] = {0};

int msort(long long s, long long t)
{
	if (s == t)
		return 0;
	long long mid = (s + t) / 2;
	msort(s, mid);
	msort(mid + 1, t);
	long long i = s, j = mid + 1, k = s;
	while (i <= mid && j <= t)
	{
		if (a[i] <= a[j])
		{
			r[k] = a[i];
			k++;
			i++;
		}
		else
		{
			r[k] = a[j];
			k++;
			j++;
			ans += mid - i + 1;
		}
	}
	while (i <= mid)
	{
		r[k] = a[i];
		k++;
		i++;
	}
	while (j <= t)
	{
		r[k] = a[j];
		k++;
		j++;
	}
	for (i = s; i <= t; i++)
		a[i] = r[i];
	return 0;
}

int main()
{
	long long n;
	while (cin >> n)
	{
		memset(a, 0, sizeof(a));
		memset(r, 0, sizeof(r));
		for (long long i = 0; i < n; i++)
			cin >> a[i];
		ans = 0;
		msort(0, n-1);
		cout << ans << endl;
	}
	return 0;
}
