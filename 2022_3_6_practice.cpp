#define _CRT_SECURE_NO_WARNINGS 1




//int m = 1, n = 2;
//int main()
//{
//	int** p = new int*[n];//new说明此时可以放m和n
//	p[1] = new int[m];
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//bool judge[1005];
//int main()
//{
//	string s;
//	getline(cin, s);
//	int len = s.size();
//	bool flag = 0;//没有引号
//	int cnt = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (!flag&&s[i] == '"')//之前没有引号并且碰到了引号
//		{
//			flag = 1;//置为1
//		}
//		else if (flag&&s[i] == '"')//之前有引号 并且碰到了配对的引号
//		{
//			flag = 0;
//		}
//		else if (flag == 1)//引号内的内容直接输出
//		{
//			judge[i] = 1;
//		}
//		else if (flag == 0 && s[i] != ' ')//没有引号，并且不是空格就输出
//		{
//			judge[i] = 1;
//		}
//		else if (flag == 0 && s[i] == ' ')//没有引号并且碰到了碰到空格 就是一个合格的串
//		{
//			cnt++;
//		}
//	}
//	bool tmp = 0;
//	cout << cnt+1 << endl;
//	for (int i = 0; i < len; i++)
//	{
//		if (judge[i])
//		{
//			cout << s[i];
//			tmp = 1;
//		}
//		else if (tmp)
//		{
//			cout << endl;
//			tmp = 0;
//		}
//	}
//	if (tmp)
//	{
//		cout << endl;
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	if (n % 2 == 0)
	{
		int t = n;
		//停止 m-t<t&&m%(m-t)==0
		if (t == m)
		{
			cout << cnt << endl;
			return 0;
		}
		while (1)
		{
			if (m - t < t&&m % (m - t) == 0||t>m)
			{
				break;
			}
			else
			{
				int x = t / 2;
				if (x % 2 == 1)
				{
					x = 2;
				}
				t += x;
				cnt++;
			}
		}
	}
	else
	{
		int t = n;
		cnt++;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (t%i == 0)
			{
				t += (t/i);
				break;
			}
		}
		if (t == m)
		{
			cout << cnt << endl;
			return 0;
		}
		while (1)
		{
			if (m - t < t&&m % (m - t) == 0||t>m)
			{
				break;
			}
			else
			{
				int x = t / 2;
				if (x % 2 == 1)
				{
					x = 2;
				}
				t += x;
				cnt++;
			}
		}
	}
	cout << cnt + 1 << endl;
	return 0;
}







