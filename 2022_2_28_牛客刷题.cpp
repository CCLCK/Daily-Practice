#define _CRT_SECURE_NO_WARNINGS 1



//string s[105];
//int main()
//{
//	//����ǲ����ֵ���  �ַ���ֱ�ӱȽϾ���
//	//����ǲ��ǳ������� �Ƚϳ��ȼ���
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	bool flag1 = 1, flag2 = 1;
//	for (int i = 0; i < n-1; i++)
//	{
//		if (s[i] > s[i + 1])
//		{
//			flag1 = 0;//�������ֵ���
//			break;
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (s[i].size()>s[i + 1].size())
//		{
//			flag2 = 0;//���ǰ���������
//			break;
//		}
//	}
//	if (flag1&&flag2)
//	{
//		cout << "both" << endl;
//	}
//	else if (flag1 == 1 && flag2 == 0)//���ֵ���
//	{
//		cout << "lexicographically" << endl;
//	}
//	else if (flag2 == 1 && flag1 == 0)
//	{
//		cout << "lengths" << endl;
//	}
//	else
//	{
//		cout << "none" << endl;
//	}
//	return 0;
//
//}

#include<iostream>
#include<string>
using namespace std;

//int gcd(int a,int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else
//	{
//		return gcd(b, a%b);
//	}
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << (a*b / gcd(a, b)) << endl;
//
//	return 0;
//}


//class A
//{
//public:
//	A(){};
//	A(A& aa)
//	{
//		cout << "i am copy construct" << endl;
//	}
//	void operator=(A& a)
//	{
//		cout << "i am =" << endl;
//	}
//};
//
//int main()
//{
//	A a1;
//	A a2=a1;//��ʼ����ʱ�������=�ͻ���ÿ�������
//	a2 = a1;//=�ڲ��ǳ�ʼ����ʱ��͵������ذ汾
//	//���void operator=(A& a)ȥ�����þͻ������һ�ο������죬ʵ�ο������β�
//
//	return 0;
//}
