#define _CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int l = 0;
//	int r = s.size() - 1;
//	while (l < r)
//	{
//		swap(s[l], s[r]);
//		l++;
//		r--;
//	}
//	cout << s << endl;
//	return 0;
//}



#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int sz1 = s1.size();
	int sz2 = s2.size();
	int mmax = -999;
	for (int i = 0; i < sz1; i++)
	{
		for (int j = 0; j < sz2; j++)
		{
			if (s1[i] == s2[j])
			{
				int x = i, y = j;
				int cnt = 0;
				while (x<sz1&&y<sz2&&s1[x] == s2[y])
				{
					cnt++;
					x++;
					y++;
				}
				if (cnt>mmax)
				{
					mmax = cnt;
				}
			}
		}
	}
	if (mmax == -999)
	{
		mmax = 0;
	}
	cout << mmax << endl;
	return 0;
}








