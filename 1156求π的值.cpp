/*
����Ŀ������
���ݹ�ʽ��

arctanx(x)=x?x33+x55?x77+...arctanx(x)=x?x33+x55?x77+...�ͦ�=6arctanx(13��)��=6arctanx(13)
���庯��arctanx(x)�������һ��С��10?610?6ʱ�е�ֵ��

�����롿
���ޣ�

�������
�е�ֵ��������С�����10λ��

������������
���ޣ�
�����������
���ޣ�
*/
#include <cstdio>
#include <cmath>

double arctanx(double x)
{
	double sum = 0;
	double n;
	
	for (int i = 1; ; i++)
	{
		n = pow(-1, i + 1) * pow(x, 2 * i - 1) / (2 * i - 1);
		
		if (fabs(n) < 1e-6)
		{
			break;
		}
		sum += n; // ���һ��Ϊʲô���� 
	}
	return sum;
}

int main()
{
	double PI = 6.0 * arctanx(1 / sqrt(3));
	printf("%.10lf\n", PI);
	return 0;
}
