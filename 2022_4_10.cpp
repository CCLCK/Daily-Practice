#define _CRT_SECURE_NO_WARNINGS 1



//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		vector<vector<int>>v(n, vector<int>(n));
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> v[i][j];
//			}
//		}
//		int cnt = 0;int j = 0;
//		for (int i = 0; i < n; i++)
//		{
//			bool f = 1;
//			if (j == 0||j==-1)
//			{
//				j = 0;
//				while (j < n)
//				{
//					if (f)
//					{
//						cout << v[i][j];
//						f = 0;
//					}
//					else
//					{
//						cout << " " << v[i][j];
//					}
//					j++;
//				}		
//			}
//			else if(j==n)
//			{
//				j = n - 1;
//				while (j >= 0)
//				{					
//					cout << " " << v[i][j];					
//					j--;
//				}			
//			}	
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<vector<int>>v(n, vector<int>(n));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> v[i][j];
			}
		}
		vector<int>ans;
		int j = 0;
		int cnt_down = 0,cnt_up=0;
		for (int i = 0; i < n; i++)
		{
			if (j == 0)
			{
				while (j+1 < n)
				{
					ans.push_back(v[i][j]);
					j++;
				}
				j = n - 1;
				ans.push_back(v[i][j]);
			}
			else if (j == n - 1)
			{
				while (j-1 >= 0)
				{
					ans.push_back(v[i][j]);
					j--;
				}
				j = 0;
				ans.push_back(v[i][j]);
			}
		}
		for (int i = 0; i+1 < ans.size(); i++)
		{
			if (ans[i] < ans[i + 1])
			{
				cnt_up++;
			}
			else
			{
				cnt_down++;
			}
		}
		bool f = 1;
		if (cnt_down >= cnt_up)
		{
			for (auto e : ans)
			{
				if (f)
				{
					cout << e;
					f = 0;
				}
				else
				{
					cout << " " << e;
				}
			}
			cout << endl;
		}
		else
		{
			for (int i = ans.size() - 1; i >= 0; i--)
			{
				if (f)
				{
					cout << ans[i];
					f = 0;
				}
				else
				{
					cout << " " << ans[i];
				}
			}
			cout << endl;
		}
	}
	return 0;
}




	