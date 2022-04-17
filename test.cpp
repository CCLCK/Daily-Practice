#define _CRT_SECURE_NO_WARNINGS 1



//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	cout << (m + n - 1) << endl;
//
//	return 0;
//}


//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (b == 0)
//	{
//		b = 2.455;
//	}
//	else
//	{
//		b = 1.26;
//	}
//	double ans = a * b;
//	if (ans > c)
//	{
//		printf("%.2f T_T\n",ans);
//	}
//	else
//	{
//		printf("%.2f ^_^\n",ans);
//	}
//	return 0;
//}




///*
//ni li hai! duo chi rou!
//duo chi yu! wan mei!
//wan mei! shao chi rou!
//duo chi yu! shao chi rou!
//
//*/
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int sex, h, w;
//		cin >> sex >> h >> w;
//		int hstd = 130, wstd = 27;//男
//		if (sex == 0)
//		{
//			hstd = 129;
//			wstd = 25;
//		}
//		if (h == hstd)
//		{
//			cout << "wan mei! ";
//		}
//		else if (h < hstd)
//		{
//			cout << "duo chi yu! ";
//		}
//		else
//		{
//			cout << "ni li hai! ";
//		}
//		if (w == wstd)
//		{
//			cout << "wan mei!" << endl;;
//		}
//		else if (w < wstd)
//		{
//			cout << "duo chi rou!" << endl;
//		}
//		else
//		{
//			cout << "shao chi rou!" << endl;
//		}
//
//
//	}
//
//	return 0;
//}



//int GetSum(int n)
//{
//	int sum = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		sum += tmp % 10;
//		tmp /= 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		int init = GetSum(n * 2);
//		bool f = 0;
//		for (int i = 3; i <= 9; i++)
//		{
//			int ans = GetSum(n * i);
//			if (ans != init)
//			{
//				f = 1;//存在不相等
//				break;
//			}
//		}
//		if (f == 1)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << init << endl;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		string s;
//		cin >> s;
//		bool f = 0;
//		for (int i = 0; i < s.size()-1; i++)
//		{
//			char cur = s[i];
//			char next = s[i + 1];
//			if (cur >= 'a' && cur <= 'z')//小写
//			{
//				if (next - cur != -1 && next - cur != -32)
//				{
//					f = 1;
//				}
//			}
//			else if (cur >= 'A' && cur <= 'Z')//大写
//			{
//				if (next - cur != 1 && next - cur != 32)
//				{
//					f = 1;
//				}
//			}
//			
//		}
//		if (f == 1)
//		{
//			cout << "N" << endl;
//		}
//		else
//		{
//			cout << "Y" << endl;
//		}
//	}
//
//	return 0;
//}


//
//int a[105][105];
//int n;
////移动第m列 往下移k个位置 补x，从1开始计数
//void func(int m,int k,int x)
//{
//	int j = n;
//	for(int i=n-k;i>=0;i--)
//	{
//		a[j][m] = a[i][m];
//		j--;
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		a[i][m] = x;
//	}
//}
//
//int main()
//{
//	int  k, x;
//	cin >> n >> k >> x;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int j = 1;
//	for (int i = 2; i <= n; i += 2)
//	{
//		func(i, j, x);
//		j++;
//		if (j > k)
//		{
//			j = 1;
//		}
//	}
//	vector<int>v;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			sum += a[i][j];
//		}
//		v.push_back(sum);
//	}
//	bool f = 1;
//	for (auto e : v)
//	{
//		if (f)
//		{
//			cout << e;
//			f = 0;
//		}
//		else
//		{
//			cout << " " << e;
//		}
//	}
//	cout << endl;
//	/*func(2, 1, x);*/
//	return 0;
//}


//bool isPrimer(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//vector<bool>f(1005);
//vector<int>a;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	for (int i = 2; i <= 1005; i++)
//	{
//		if (isPrimer(i))
//		{
//			a.push_back(i);
//			f[i] = 1;
//		}
//	}	
//	vector<int>v;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] > n)
//		{
//			break;
//		}
//		if (a[i] >= m)
//		{
//			v.push_back(a[i]);
//		}
//	}
//	int sz = v.size();
//	int cnt = 0;
//	for (int x = 0; x < sz; x++)
//	{
//		for (int y = x + 1; y < sz; y++)
//		{
//			for (int z = y + 1; z < sz; z++)
//			{
//				int ans1 = v[x] * v[y] + v[z];
//				int ans2 = v[x] * v[z]+ v[y];
//				int ans3 = v[y] * v[z] + v[x];
//				if (ans1 <= 1000 && ans2 <= 1000 && ans3 <= 1000)
//				{
//					if (f[ans1] && f[ans2] && f[ans3])
//					{
//						//cout << v[x] << "," << v[y] << "," << v[z] << endl;
//						cnt++;
//					}
//				}
//				else
//				{
//					if ((ans1 % 6 == 1||ans1%6==5) && 
//						(ans2 % 6 == 1 || ans2 % 6 == 5) &&
//						(ans3 % 6 == 1 || ans3 % 6 == 5))//三个数都%6==1||==5
//					{
//						if (isPrimer(ans1) && isPrimer(ans2) && isPrimer(ans3))
//						{
//							//cout << v[x] << "," << v[y] << "," << v[z] << endl;
//							cnt++;
//						}
//					}
//				}
//			}
//		}
//	}
//	
//	cout << cnt << endl;
//	return 0;
//}




//int main()
//{
//	int n, s;
//	cin >> n >> s;
//	queue<int>q;
//	for (int i = 0; i <n ; i++)
//	{
//		int t;
//		cin >> t;
//		q.push(t);
//	}
//	stack<int>st;
//	map<int, int>m;//编号 徽章号
//	for (int i = 0; i < n / s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			int t;
//			cin >> t;
//			st.push(t);
//		}
//		while (!st.empty())
//		{
//			m[q.front()] = st.top();
//			st.pop();
//			q.pop();
//		}
//	}
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int id;
//		cin >> id;
//		if (m[id] == 0)
//		{
//			cout << "Wrong Number" << endl;
//		}
//		else
//		{
//			cout << m[id] << endl;
//		}
//	}
//
//
//	return 0;
//}



//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <vector>
//#include <cmath>
//#include<queue>
//#include <stack>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//typedef pair<string, int> PAIR;
//
//
//
//
//map<string, int>m;
//map<string, int>m2;
//
//bool cmp(const PAIR e1, const PAIR  e2)
//{
//	if (e1.second != e2.second)
//	{
//		return e1.second > e2.second;
//	}
//	else 
//	{
//		return m2[e1.first] < m2[e2.first];
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		string s;
//		cin >> s;
//		int k;
//		cin >> k;
//		m2[s] = k;
//		set<int>se;
//		for (int i = 0; i < k; i++)
//		{
//			int t;
//			cin >> t;
//			se.insert(t);
//		}
//		m[s] = se.size();
//	}
//	vector<PAIR>v(m.begin(), m.end());
//	sort(v.begin(), v.end(), cmp);
//	int sz = v.size();
//	bool f = 1;
//	int tmp = sz;
//	if (tmp >= 3)
//	{
//		tmp = 3;
//	}
//	for (int i = 0; i < tmp; i++)
//	{
//		if (f)
//		{
//			cout << v[i].first;
//			f = 0;
//		}
//		else
//		{
//			cout << " " << v[i].first;
//		}
//	}
//	if (sz>=1&&sz < 3)
//	{
//		int x = 3 - sz;
//		while (x--)
//		{
//			cout << " -" ;
//		}
//	}
//	else if (sz == 0)
//	{
//		cout << "- - -" ;
//	}
//	cout << endl;
//	return 0;
//}


//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <vector>
//#include <cmath>
//#include<queue>
//#include <stack>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//int w[1005];
//int v[1005];
//int dp[1005][1005];
//int main()
//{
//	int n,m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> w[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//		
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (j - w[i] >= 0)
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
//			}
//			
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}


