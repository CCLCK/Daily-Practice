#define _CRT_SECURE_NO_WARNINGS 1



//string s[105];
//int main()
//{
//	//检查是不是字典序  字符串直接比较就行
//	//检查是不是长度排序 比较长度即可
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
//			flag1 = 0;//不符合字典序
//			break;
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (s[i].size()>s[i + 1].size())
//		{
//			flag2 = 0;//不是按长度排序
//			break;
//		}
//	}
//	if (flag1&&flag2)
//	{
//		cout << "both" << endl;
//	}
//	else if (flag1 == 1 && flag2 == 0)//是字典序
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
//	A a2=a1;//初始化的时候如果用=就会调用拷贝构造
//	a2 = a1;//=在不是初始化的时候就调用重载版本
//	//如果void operator=(A& a)去掉引用就还会调用一次拷贝构造，实参拷贝给形参
//
//	return 0;
//}
