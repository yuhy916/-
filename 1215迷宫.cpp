/*
����Ŀ������
һ��Extense��ɭ����̽�յ�ʱ��С��������һ���Թ����Թ����Կ�������n * n�ĸ����ɣ�ÿ�����ֻ��2��״̬��.��#��ǰ�߱�ʾ����ͨ�к��߱�ʾ����ͨ�С�ͬʱ��Extense����ĳ�����ʱ����ֻ���ƶ�����������(����˵��������)�ĸ�����֮һ�����ڸ���ϣ�Extense��Ҫ�ӵ�A�ߵ���B�����ڲ��߳��Թ���������ܲ��ܰ쵽������������յ���һ������ͨ��(Ϊ#)���򿴳��޷��쵽��

�����롿
��1���ǲ������ݵ�����k���������k�����롣ÿ��������ݵĵ�1����һ��������n (1 �� n �� 100)����ʾ�Թ��Ĺ�ģ��n * n�ġ���������һ��n * n�ľ��󣬾����е�Ԫ��Ϊ.����#���ٽ�����һ����4������ha, la, hb, lb������A���ڵ�ha��, ��la�У�B���ڵ�hb��, ��lb�С�ע�⵽ha, la, hb, lbȫ���Ǵ�0��ʼ�����ġ�

�������
k�У�ÿ�������Ӧһ�����롣�ܰ쵽�������YES�������������NO����

������������
2
3
.##
..#
#..
0 0 2 2
5
.....
###.#
..#..
###..
...#.
0 0 4 0
�����������
YES
NO
*/
#include <iostream>
#include <queue>
using namespace std;

typedef pair<int, int> P;

const int N = 110, INF = 1000000;
int k, n, ha, la, hb, lb, b[N][N];
int dx[4] = {1, 0, 0, -1}, dy[4] = {0, 1, -1, 0};
char a[N][N];

int dfs(int x, int y)
{
	if (x == hb && y == lb)
		return 1;
	
	b[x][y] = 1;
	
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < n && !b[nx][ny] && a[nx][ny] == '.')
			if (dfs(nx, ny))
				return 1;
	}
	b[x][y] = 0;
	
	return 0;
}

int bfs()
{
	queue<P> q;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			b[i][j] = INF;
	b[ha][la] = 0;
	q.push(P(ha, la));
	
	while (q.size())
	{
		P p = q.front();
		q.pop();
		if (p.first == hb && p.second == lb)
			break;
		for (int i = 0; i < 4; i++)
		{
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && b[nx][ny] == INF && a[nx][ny] == '.')
			{
				q.push(P(nx, ny));
				b[nx][ny] = b[p.first][p.second] + 1;
			}
		}
	}
	return b[hb][lb];
}

int main()
{
	cin >> k;
	while (k > 0)
	{
		cin >> n;
		
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
//				b[i][j] = 0;
			}
			
		cin >> ha >> la >> hb >> lb;
		
		if (a[ha][la] == '#' || a[hb][lb] == '#')
			cout << "NO" << endl;
		else
//			if (dfs(ha, la))
			if (bfs() != INF)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

		k--;
	}
	return 0;
}
