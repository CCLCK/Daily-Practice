#define _CRT_SECURE_NO_WARNINGS 1



//typedef long long ll;
////没有第0个月这种说法 出生就算第一个月
//ll a[35];
//int main()
//{
//	int n;
//	cin >> n;
//	a[0] = 1;
//	a[1] = 1;
//	a[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	cout << a[n] << endl;
//	return 0;
//}

;

//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	cout << "false" << endl;
//	return 0;
//}




//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		int x = n;
//		int sum = 0;
//		while (x>=3)
//		{
//			sum += x / 3;
//			x = (x % 3 + x / 3);
//		}
//		if (x == 2)
//		{
//			sum++;
//		}
//		cout << sum << endl;
//	}
//
//	return 0;
//}

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int dp[305][305];
int reco[305][305];
vector<int>v;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int sz1 = s1.size();
	int sz2 = s2.size();
	int flag = 0;
	string ans;
	for (int i = 1; i <= sz1; i++)
	{
		
		for (int j = 1; j <= sz2; j++)
		{	
			if (s1[i-1] == s2[j-1])
			{
				flag = 1;
				dp[i][j]=dp[i-1][j-1]+1;
				reco[i][j] = 1;
				v.push_back(i-1);
			}
			else if (dp[i - 1][j]>dp[i][j - 1])
			{
				dp[i][j] =dp[i - 1][j];
				reco[i][j] = 2;
			}
			else
			{
				dp[i][j] = dp[i ][j-1];
				reco[i][j] = 3;
			}		
		}		
	}
	int x = sz1, y = sz2;
	while (x>=1&&y>=1)
	{
		switch (reco[x][y])
		{
		case 1:
			x = x - 1;
			y = y - 1;
			ans += s1[x];
			break;
		case 2:
			x = x - 1;
			ans += s1[x];
			break;
		case 3:
			
			y = y - 1;
			ans += s2[y];
			break;
		}
		
	}
	//找出最长的这个连续序列
	int sz = v.size();
	int left, right, mmax = -2147483647;
	for (int i = 0; i < sz; i++)
	{
		int t = 0;
		int j = i;
		while(i+1<sz&&v[i + 1] - v[i] == 1)
		{
			t++;
			i++;
		}
		if (t > mmax)
		{
			left = j;
			right = i;
		}
	}
	cout << ans.substr(left,right+1) << endl;
	return 0;
}

