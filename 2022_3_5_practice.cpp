#define _CRT_SECURE_NO_WARNINGS 1


//import java.util.*;
//java´úÂë
//public class Solution {
//	public boolean wordBreak(String s, Set<String> dict) {
//		int len = s.length();
//		boolean[] dp = new boolean[len + 1];
//		dp[0] = true;
//		for (int i = 1; i<len + 1; i++)
//		{
//			for (int j = 0; j<i; j++)
//			{
//				if (dp[j] && dict.contains(s.substring(j, i)))
//				{
//					dp[i] = true;
//				}
//			}
//		}
//		return dp[len];
//	}
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) {
//		if (triangle.empty())
//		{
//			return 0;
//		}
//		for (int i = 1; i < triangle.size(); i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				if (j == 0)
//				{
//					triangle[i][j] = triangle[i - 1][j] + triangle[i][j];
//				}
//				else if (j == i)
//				{
//					triangle[i][j] = triangle[i - 1][j - 1] + triangle[i][j];
//				}
//				else
//				{
//					triangle[i][j] = min(triangle[i - 1][j], triangle[i - 1][j - 1]) + triangle[i][j];
//				}
//			}
//		}
//		int ans = 2147483647;
//		for (int i = 0; i < triangle[triangle.size() - 1].size(); i++)
//		{
//			ans = min(ans, triangle[triangle.size() - 1][i]);
//		}
//		return ans;
//	}
//};
//int main()
//{
//	vector<vector<int>> v;
//	vector<int>v1;
//	v1.push_back(1);
//	v1.push_back(1);
//	v.push_back(v1);
//	v.push_back(v1);
//	cout << v.size() << endl;
//
//	return 0;
//}


int dp[105][105];
class Solution {
public:
	/**
	*
	* @param m intÕûÐÍ
	* @param n intÕûÐÍ
	* @return intÕûÐÍ
	*/
	int uniquePaths(int m, int n) {
		// write code here
		dp[0][0] = 1;
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i - 1>=0)
				{
					dp[i][j] += dp[i - 1][j] ;
				}
				if (j - 1 >= 0)
				{
					dp[i][j] += dp[i][j - 1];
				}		
			}
		}
		return dp[m-1][n-1];
	}
};

//
int main()
{
	cout << Solution().uniquePaths(1, 1) << endl;
	return 0;
}




