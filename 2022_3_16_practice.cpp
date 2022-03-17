#define _CRT_SECURE_NO_WARNINGS 1


//typedef long long ll;
//
//ll gcd(ll x, ll y)
//{
//	if (!y)
//	{
//		return x;
//	}
//	return gcd(y, x%y);
//}
//
//int main()
//{
//	ll n, pow;
//	while (cin >> n >> pow)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int x;
//			cin >> x;
//			if (pow >= x)
//			{
//				pow += x;
//			}
//			else
//			{
//				pow += gcd(pow, x);
//			}
//		}
//		cout << pow << endl;
//	}
//
//	return 0;
//}

#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
typedef pair<char, int> PAIR;
int cnt[1005];
map<char, int>m;

bool cmp(PAIR e1, PAIR e2)
{
	return e1.second < e2.second;

}
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (m[s[i]] == 0)
		{
			m[s[i]] = i;
		}
		cnt[s[i]]++;
	}
	vector<PAIR>v(m.begin(),m.end());
	sort(v.begin(), v.end(),cmp);
	for (auto e : v)
	{
		if (cnt[e.first] == 1)
		{
			cout << e.first << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
	return 0;
}







