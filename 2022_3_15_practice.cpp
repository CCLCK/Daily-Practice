#define _CRT_SECURE_NO_WARNINGS 1




//vector<int> func(vector<int>& v1, vector<int>& v2)
//{
//	int sz = v1.size();
//	vector<int>v;
//	for (int i = 0; i < sz; i++)
//	{
//		v.push_back(v1[i]);
//		v.push_back(v2[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		v1[i] = v[i];
//		v2[i] = v[i + sz];
//	}
//	return v;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, k;
//		cin >> n >> k;
//		vector<int>v1;
//		vector<int>v2;
//		vector<int>v;
//		for (int i = 0; i < n; i++)
//		{
//			int x;
//			cin >> x;
//			v1.push_back(x);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int x;
//			cin >> x;
//			v2.push_back(x);
//		}
//		while (k--)
//		{
//			v=func(v1, v2);
//		}
//		bool f = 1;
//		for (auto e : v)
//		{
//			if (f)
//			{
//				cout << e ;
//				f = 0;
//			}
//			else
//			{
//				cout << " " << e;
//			}
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cur = 0;
	int board=0;
	char op;
	getchar();
	if (n >= 4)
	{
		while (cin.get(op))
		{		
			if (op == '\n')
			{
				break;
			}
			if (op == 'U')
			{
				cur--;			
				if (cur == -1)//最后一个数
				{
					cur = n - 1;
					board = n - 1 - 3;
				}	
			}
			else if (op == 'D')
			{
				cur++;
				if (cur == n)
				{
					cur = 0;
					board = 0;
				}
			}
			if (cur - board >= 4)
			{
				board = cur - 3;
			}
			if (cur < board)
			{
				board = cur;
			}
		}
		board++;
		cur++;
	
			cout << board << " " << board + 1 << " " << board + 2 << " " << board + 3 << endl;
			cout << cur << endl;
	}
	else
	{
		int sum = 0;
		while (cin.get(op))
		{
			if (op == '\n')
			{
				break;
			}
			if (op == 'U')
			{
				sum--;
			}
			else if (op == 'D')
			{
				sum++;
			}
		}
		while (sum >= n)
		{
			sum = sum%n;
		}
		while (sum < 0)
		{
			sum += n;
		}
		bool f = 1;
		for (int i = 1; i <= n; i++)
		{
			if (f)
			{
				cout << i;
				f = 0;
			}
			else
			{
				cout << " " << i;
			}		
		}
		cout << endl;
		cout << sum + 1 << endl;
	}
	return 0;
}



