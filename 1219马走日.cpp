/*
����Ŀ������
�����й������������ι����ƶ���

���дһ�γ��򣬸���n��m��С�����̣��Լ���ĳ�ʼλ��(x��y)��Ҫ�����ظ����������ϵ�ͬһ���㣬����������ж���;�����������ϵ����е㡣

�����롿
��һ��Ϊ����T(T < 10)����ʾ��������������

ÿһ��������ݰ���һ�У�Ϊ�ĸ��������ֱ�Ϊ���̵Ĵ�С�Լ���ʼλ������n,m,x,y��(0��x��n-1,0��y��m-1, m < 10, n < 10)��

�������
ÿ��������ݰ���һ�У�Ϊһ����������ʾ���ܱ������̵�;��������0Ϊ�޷�����һ�Ρ�

������������
1
5 4 0 0
�����������
32
*/
#include <iostream>
#include <cstring>
using namespace std;

const int N = 20;
int t, n, m, sx, sy, b[N][N] = {0}, num = 0;
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2}, dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
int dfs(int x, int y)
{
	int pn = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (b[i][j] == 0)
				break;
			pn++;
		}
	if (pn == n *m)
	{
		num++;
		return 0;
	}
	
	for (int i = 0; i < 8; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m && !b[nx][ny])
		{
			b[nx][ny] = 1;
			dfs(nx, ny);
			b[nx][ny] = 0;
		}
	}
		
	return 0;
}
int main()
{
	cin >> t;
	while (t)
	{
		cin >> n >> m >> sx >> sy;
		num = 0;
		memset(b, 0, sizeof(b));
		b[sx][sy] = 1;
		dfs(sx, sy);
		cout << num << endl;
		t--;
	}
	return 0;
}
