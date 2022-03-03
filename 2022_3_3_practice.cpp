#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<vector>
using namespace std;

//class LCA {
//public:
//	int getLCA(int a, int b) {
//		// write code here
//		if (a == 1 || b == 1)
//		{
//			return 1;
//		}
//		else if (a == b)
//		{
//			return a;
//		}
//		int mmax = a;
//		int mmin = b;
//		if (a < b)
//		{
//			mmax = b;
//			mmin = a;
//		}
//		int x = mmax;
//		while (x)
//		{
//			x /= 2;
//			if (x == mmin)
//			{
//				return mmin;
//			}
//		}
//		int tmp = mmin / 2;
//		int ans = mmax/2;
//		while (ans != 0 && (ans != tmp && abs(ans - tmp) != 1))
//		{
//			ans /= 2;
//		}
//		if (ans == tmp)
//		{
//			return ans;
//		}
//		else if (abs(ans - tmp) == 1)
//		{
//			return (ans / 2);
//		}
//	}
//};
//
//int main()
//{
//	cout << LCA().getLCA(2, 3) << endl;
//	return 0;
//}

//int GetNum(int x)
//{
//	int cnt = 0;
//	int ans = -2147483647;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((x >> i) & 1)
//		{
//			cnt++;
//		}
//		else
//		{
//			cnt = 0;
//		}
//		ans = (ans < cnt ? cnt : ans);
//		//200    11001000
//	}
//	return ans;
//}
//
//int main()
//{
//	int x;
//	while (cin >> x)
//	{
//		cout << GetNum(x) << endl;
//	}
//	
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class LCA {
//public:
//	int getLCA(int a, int b) {
//		vector<int>va;
//		vector<int>vb;
//		// write code here
//		va.push_back(a);
//		vb.push_back(b);
//		while (a)
//		{
//			a /= 2;
//			va.push_back(a);
//		}
//		while (b)
//		{
//			b /= 2;
//			vb.push_back(b);
//		}
//		for (int i = 0; i < va.size();i++)
//		{
//			for (int j = 0; j < vb.size();j++)
//			{
//				if (va[i] == vb[j])
//				{
//					return va[i];
//				}
//				else if (va[i]<vb[j])
//				{
//					;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//	}
//};
//int main()
//{
//	 int x=LCA().getLCA(6, 3);
//	 cout << x << endl;
//	 return 0;
//}









