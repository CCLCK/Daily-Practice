#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<string>
using namespace std;

int GetScore(string& s)
{
	int sum = 0;
	int len = s.size();
	if (len <= 4)
	{
		sum += 5;
	}
	else if (len >= 5 && len <= 7)
	{
		sum += 10;
	}
	else if (len >= 8)
	{
		sum += 25;
	}
	bool low_alpha = 0, great_alpha = 0;
	int symbol_cnt = 0,num_cnt=0;
	for (auto e : s)
	{
		if (e >= 'a'&&e <= 'z')//×ÖÄ¸
		{
			low_alpha = 1;
		}
		else if (e >= 'A'&&e <= 'Z')//×ÖÄ¸
		{
			great_alpha = 1;
		}
		else if (e>='0'&&e<='9')//Êý×Ö
		{
			num_cnt++;
		}
		else if(e<=127)//·ûºÅ
		{
			symbol_cnt++;
		}
	}
	if (low_alpha&&great_alpha)
	{
		sum += 20;
	}
	else if (low_alpha || great_alpha)
	{
		sum += 10;
	}
	if (num_cnt > 1)
	{
		sum += 20;
	}
	else if (num_cnt == 1)
	{
		sum += 10;
	}
	if (symbol_cnt > 1)
	{
		sum += 25;
	}
	else if (symbol_cnt == 1)
	{
		sum += 10;
	}
	if (low_alpha&&great_alpha&&num_cnt&&symbol_cnt)
	{
		sum += 5;
	}
	else if ((low_alpha || great_alpha) && num_cnt&&symbol_cnt)
	{
		sum += 3;
	}
	else if ((low_alpha || great_alpha) && num_cnt)
	{
		sum += 2;
	}
	return sum;
}

int main()
{
	string s;
	while (cin >> s)
	{
		int score = GetScore(s);
		if (score >= 90)
		{
			cout << "VERY_SECURE" << endl;
		}
		else if (score>=80)
		{
			cout << "SECURE" << endl;
		}
		else if (score >= 70)
		{
			cout << "VERY_STRONG" << endl;
		}
		else if (score >= 60)
		{
			cout << "STRONG" << endl;
		}
		else if (score >= 50)
		{
			cout << "AVERAGE" << endl;
		}
		else if (score>=25)
		{
			cout << "WEAK" << endl;
		}
		else if (score>=0)
		{
			cout << "VERY_WEAK" << endl;
		}
	}

	return 0;
}









