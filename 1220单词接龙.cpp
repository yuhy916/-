/*
����Ŀ������
���ʽ�����һ�������Ǿ�����ĳ�����������Ƶ���Ϸ������������֪һ�鵥�ʣ��Ҹ���һ����ͷ����ĸ��Ҫ����������ĸ��ͷ����ġ�������ÿ�����ʶ�����ڡ������г������Σ�����������������ʱ�����غϲ��ֺ�Ϊһ���֣�����beast��astonish������ӳ�һ�������Ϊbeastonish���������ڵ������ֲ��ܴ��ڰ�����ϵ������at��atide�䲻��������

�����롿
����ĵ�һ��Ϊһ������������n(n��20)��ʾ������������n��ÿ����һ�����ʣ�ֻ���д�д��Сд��ĸ�����Ȳ�����20������������һ��Ϊһ�������ַ�����ʾ��������ͷ����ĸ������Լٶ��Դ���ĸ��ͷ�ġ�����һ�����ڡ�

�������
ֻ������Դ���ĸ��ͷ����ġ������ĳ��ȡ�

������������
5
at
touch
cheat
choose
tact
a
�����������
23
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

const int N = 30;
int n, b[N] = {0}, maxn = 0;
string s[N], h;

int solve(const string &h) 
{
	for (int i = 1; i <= h.length(); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[j] < 2 && s[j].find(h.substr(h.length() - i)) == 0 && (s[j] == h || s[j].find(h) != 0)) 
			{
				string nh(h);
				nh.erase(0, nh.find_first_not_of(" "));
				nh.append(s[j].begin() + i, s[j].end());
				maxn = maxn > nh.length() ? maxn : nh.length();
				
				b[j]++;
				solve(nh);
				b[j]--;
			}
		}
	}
	
	return 0;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);
	}
	cin >> h;
	transform(h.begin(), h.end(), h.begin(), ::tolower);
	solve(" " + h);
	cout << maxn << endl;
	return 0;
}
