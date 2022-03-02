#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
using namespace std;
typedef long long ll;

#define N 50
//int main()
//{
//	ll* dp = new ll[N+1];
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i <= N; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	for (int i = 0; i <= N; i++)//N+1¸öÊý
//	{
//		cout << dp[i] << endl;
//	}
//	return 0;
//}

// 0 1 1 2
int main()
{
	ll* dp = new ll[N + 1];
	ll fib = 0;
	ll fib2 = 1;
	ll ans = 0;
	for (int i = 2; i <= N; i++)
	{
		ans = fib + fib2;
		fib = fib2;
		fib2 = ans;
	}
	cout << ans << endl;
	delete[] dp;
	return 0;
}




