#define _CRT_SECURE_NO_WARNINGS 1








//#include<iostream>
//using namespace std;
//int n, m;
//int a[10][10];
//int cnt = 0;
//void dfs(int x,int y)
//{
//	if (x == n&&y == m)
//	{
//		cnt++;
//		return;
//	}
//	if (a[x][y] == 0 && x >= 0 && x <= n&&y >= 0 && y <= m)
//	{
//		a[x][y] = 1;
//		dfs(x + 1, y);
//		dfs(x, y + 1);
//		a[x][y] = 0;
//	}
//	else
//	{
//		return;
//	}
//	
//}
//
//int main()
//{
//	while (cin >> n >> m)
//	{
//		memset(a, 0, sizeof(a));
//		cnt = 0;
//		dfs(0, 0);
//		cout << cnt << endl;
//	}
//	return 0;
//}



//class Solution {
//public:
//	int add(int a, int b) {
//		while (b)
//		{
//不用加号实现加法
//			int carry = (a&b) << 1;
//			a = a^b;
//			b = carry;
//		}
//		return a;
//	}
//};
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = -1;
//	cout << (a << 1) << endl;
//	cout << Solution().add(-1, 2) << endl;
//}