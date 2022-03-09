#define _CRT_SECURE_NO_WARNINGS 1






//bool check(int n)
//{
//	int sum = 1;
//	for (int i = 2; i < sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			sum += (i+n/i);
//		}
//	}
//	int x = (int)sqrt(n);
//	if (x*x == n)
//	{
//		sum += x;
//	}
//	if (sum == n)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int cnt = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (check(i))
//		{
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}


#include<iostream>
#include<map>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//写了半天忘了处理10 寄!
string s;
string s1, s2;
map<char, int>m;
int GetMax(char a, char b)
{
	m['3'] = 3;m['4'] = 4;m['5'] = 5;	
	m['6'] = 6;m['7'] = 7;m['8'] = 8;
	m['9'] = 9; m['J'] = 10; m['Q'] = 11;
	m['K'] = 12; m['A'] = 13; m['2'] = 14;
	int x = m[a];
	int y = m[b];
	return x-y;
}
int GetMax(string s1, string s2)
{
	map<string, int>m2;
	m2["3"] = 3; m2["4"] = 4; m2["5"] = 5;
	m2["6"] = 6; m2["7"] = 7; m2["8"] = 8;
	m2["9"] = 9; m2["J"] = 10; m2["Q"] = 11;
	m2["K"] = 12; m2["A"] = 13; m2["2"] = 14;
	m2["joker"] = 15; m2["JOKER"] = 16;
	int x = m2[s1];
	int y = m2[s2];
	return x - y;
}
//bool GetMin(char a, char b)
//{
//	m['3'] = 3; m['4'] = 4; m['5'] = 5;
//	m['6'] = 6; m['7'] = 7; m['8'] = 8;
//	m['9'] = 9; m['J'] = 10; m['Q'] = 11;
//	m['K'] = 12; m['A'] = 13; m['2'] = 14;
//	int x = m[a];
//	int y = m[b];
//	return y-x==1;
//
//}
int GetSame(string s)
{
	int len = s.size();
	char ch = s[0];
	int cnt = 0;
	for (int i = 0; i < len; i++)
	{
		if (ch == s[i])
		{
			cnt++;
		}
	}
	return cnt;
}
int GetSize(string s)
{
	if (s == "joker" || s == "JOKER")
	{
		return 1;
	}
	if (s == "joker JOKER" || s == "JOKER joker")
	{
		return 2;
	}
	int cnt = 0;
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		if (i+1<len&&s[i] == '1'&&s[i + 1] == '0')
		{
			cnt++;
			i++;
			continue;
		}
		if (s[i] != ' ')
		{
			cnt++;
		}
	}
	return cnt;
}
bool CheckContinue(string s)
{
	int same = GetSize(s);
	if (same != 5)
	{
		return false;
	}
	int len = s.size();
	char ch = s[0];
	string tmp;
	for (int i = 0; i < len; i++)
	{
		if (s[i] != ' ')
		{
			tmp += s[i];
		}
	}
	sort(tmp.begin(), tmp.end());
	for (int i = 0; i < 4; i++)
	{
		if (GetMax(tmp[i], tmp[i + 1])!=-1)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	getline(cin, s);
	int len = s.size();
	int j;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			j = i+1;
			break;
		}		
		s1 += s[i];
		
	}
	s2 = s.substr(j, len);
	int sz1 = GetSize(s1);
	int sz2 = GetSize(s2);
	int joker1=0, joker2=0;
	if (s1.find("joker") != string::npos || s1.find("JOKER") != string::npos)//至少一张
	{
		if (s1.find("joker") != string::npos && s1.find("JOKER") != string::npos)
		{
			joker1 = 2;
		}
		else//一张
		{
			joker1 = 1;
		}
	}
	if (s2.find("joker") != string::npos || s2.find("JOKER") != string::npos)//至少一张
	{
		if (s2.find("joker") != string::npos && s2.find("JOKER") != string::npos)
		{
			joker2 = 2;
		}
		else//一张
		{
			joker2 = 1;
		}
	}
	if (sz1==2&&joker1 == 2)
	{
		cout << "joker JOKER" << endl;
		return 0;//有对王直接结束
	}
	if (sz2 == 2 && joker2 == 2)
	{
		cout << "joker JOKER" << endl;
		return 0;//有对王直接结束
	}
		//1个有效字符 个子   
	//2          对子
	//3          三个
	//4          四个  这四种去判断有效字符是不是等于相同字符 如果不等于直接输出ERROR
	//5          五个  这种去检查有效字符是否连续
	if (sz1 == 1 && s2 == "10")
	{
		if (s1[0] <= '9'&&s1[0] >= '3')
		{
			cout << "10" << endl;
			return 0;
		}
	}
	if (sz2 == 1 && s1 == "10")
	{
		if (s2[0] <= '9'&&s2[0] >= '3')
		{
			cout << "10" << endl;
			return 0;
		}
	}
	int same1 = GetSame(s1);
	int same2 = GetSame(s2);
	if (sz1==4||sz2==4&&same1 == 4 || same2 == 4)//至少有一个炸
	{
		if (same1 == 4 && same2 == 4)
		{
			if (GetMax(s1[0],s2[0])>0)
			{
				cout << s1 << endl;
				return 0;
			}
			else
			{
				cout << s2 << endl;
				return 0;
			}
		}
		else if (same1 == 4)
		{
			cout << s1 << endl;
			return 0;
		}
		else if (same2 == 4)
		{
			cout << s2 << endl;
			return 0;
		}
	}
	//没有炸
	if (CheckContinue(s1) && CheckContinue(s2))//是顺子
	{
		if (GetMax(s1[0], s2[0])>0)
		{
			cout << s1 << endl;
			return 0;
		}
		else
		{
			cout << s2 << endl;
			return 0;
		}
	}
	if (sz1 != sz2)//有效字符不相等
	{
		cout << "ERROR" << endl;
		return 0;
	}
	else
	{
		if (sz1 == 1 && sz1 == same1&&sz2 == same2)
		{		
			if (GetMax(s1,s2)>0)
			{
				cout << s1 << endl;
				return 0;
			}
			else
			{
				cout << s2 << endl;
				return 0;
			}
		}
		if (sz1 == same1&&sz2 == same2)// 对子 三个
		{
			if (GetMax(s1[0], s2[0])>0)
			{
				cout << s1 << endl;
				return 0;
			}
			else
			{
				cout << s2 << endl;
				return 0;
			}
		}
		else
		{
			cout << "ERROR" << endl;
			return 0;
		}
	}
	return 0;
}
