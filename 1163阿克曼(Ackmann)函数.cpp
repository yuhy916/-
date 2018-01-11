/*
����Ŀ������
������(Ackmann)����A(m��n)�У�m��n�������ǷǸ�����(m��3,n��10)������ֵ����Ϊ��

akm(m,n) = n+1;         (m=0ʱ)

akm(m,n) = akm(m-1,1);  (m>0,n=0ʱ)

akm(m,n) = akm(m-1,akm(m, n-1)); ��m,n>0ʱ)

�����롿
����m��n��

�������
����ֵ��

������������
2 3
�����������
9
*/
#include <iostream>
using namespace std;

int akm(int m, int n)
{
	if (m == 0)
		return n+1;
	if (n == 0 && m > 0)
		return akm(m-1, 1);
	if (m > 0 && n > 0)
		return akm(m -1, akm(m, n-1));
	return 0;
}

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << akm(m, n) << endl;
	}
	return 0;
}
