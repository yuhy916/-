/*
����Ŀ������
��һ�ο����У�ÿ��ѧ���ĳɼ�������ͬ����֪����ÿ��ѧ����ѧ�źͳɼ����󿼵�k��ѧ����ѧ�źͳɼ���

�����롿
��һ���������������ֱ���ѧ��������n��1��n��100���������k��ѧ����k��1��k��n����

�����n�����ݣ�ÿ�а���һ��ѧ�ţ���������һ���ɼ��������������м���һ���ո�ָ���

�������
�����k��ѧ����ѧ�źͳɼ����м��ÿո�ָ�����ע������%g����ɼ���

������������
5 3
90788001 67.8
90788002 90.3
90788003 61
90788004 68.4
90788005 73.9
�����������
90788004 68.4
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio> 
using namespace std;

struct Student{  
    long id;
	double score; 
    Student(long x, double y) : id(x), score(y) { }  
}; 

int s_cmp(const Student &s1, const Student &s2)
{
	return s1.score > s2.score;
}

int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		vector<Student> ivec;
		long id;
		double score;
		for (int i = 0; i < n; i++)
		{
			cin >> id >> score;
			ivec.push_back(Student(id, score));
		}
		stable_sort(ivec.begin(), ivec.end(), s_cmp);
		cout << ivec[k-1].id << " " << ivec[k-1].score << endl;
	}
	return 0;
}
