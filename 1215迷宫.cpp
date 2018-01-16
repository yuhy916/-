/*
【题目描述】
一天Extense在森林里探险的时候不小心走入了一个迷宫，迷宫可以看成是由n * n的格点组成，每个格点只有2种状态，.和#，前者表示可以通行后者表示不能通行。同时当Extense处在某个格点时，他只能移动到东南西北(或者说上下左右)四个方向之一的相邻格点上，Extense想要从点A走到点B，问在不走出迷宫的情况下能不能办到。如果起点或者终点有一个不能通行(为#)，则看成无法办到。

【输入】
第1行是测试数据的组数k，后面跟着k组输入。每组测试数据的第1行是一个正整数n (1 ≤ n ≤ 100)，表示迷宫的规模是n * n的。接下来是一个n * n的矩阵，矩阵中的元素为.或者#。再接下来一行是4个整数ha, la, hb, lb，描述A处在第ha行, 第la列，B处在第hb行, 第lb列。注意到ha, la, hb, lb全部是从0开始计数的。

【输出】
k行，每行输出对应一个输入。能办到则输出“YES”，否则输出“NO”。

【输入样例】
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
【输出样例】
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
