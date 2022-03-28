#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//bool check(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
//	{
//		return true;
//	}
//	return false;
//}
//int sum[10005];
//int main()
//{
//	//分别算出2000-9999每年有多少天  
//
//	for (int i = 2000; i <= 10000; i++)
//	{
//		if (check(i))
//		{
//			sum[i] = sum[i - 1] + 366;
//		}
//		else
//		{
//			sum[i] = sum[i - 1] + 365;
//		}
//	}
//	int t = 5;//必须加上这个数才知道星期几
//	//1号的星期数大于要找的 就往后找到第一个星期几
//	//比如1.1是星期六 往后找到第一个星期一再加
//	int year;
//	while (cin >> year)
//	{
//		int first_day = sum[year - 1] + 1;
//		int week_day = (first_day + 5) % 7;
//		int cnt = 0;
//		while ((week_day + cnt) % 7 != 1)
//		{
//			cnt++;
//		}
//		printf("%d-%02d-%02d\n", year, 1, 1);
//		printf("%d-%02d-%02d\n", year, 1, 1 + cnt + 14);
//		cnt = 0;
//		week_day = (first_day + 31 + 5) % 7;
//		while ((week_day + cnt) % 7 != 1)
//		{
//			cnt++;
//		}
//		printf("%d-%02d-%02d\n", year, 2, 1 + cnt + 14);
//		cnt = 0;
//		int second = 0;
//		if (check(year))
//		{
//			second = 29;
//		}
//		else
//		{
//			second = 28;
//		}
//		week_day = (first_day + 31 + second + 31 + 30 + 31 + 5 - 1) % 7;
//		while ((week_day + cnt) % 7 != 1)
//		{
//			cnt++;
//		}
//
//		if (cnt != 0)
//		{
//			printf("%d-%02d-%02d\n", year, 5, 31 - (7 - cnt));
//		}
//		else
//		{
//			printf("%d-%02d-%02d\n", year, 5, 31);
//		}
//
//		cnt = 0;
//		printf("%d-%02d-%02d\n", year, 7, 4);
//		week_day = (first_day + 31 + second + 31 + 30 + 31 + 30 + 31 + 31 + 5) % 7;
//		while ((week_day + cnt) % 7 != 1)
//		{
//			cnt++;
//		}
//		printf("%d-%02d-%02d\n", year, 9, 1 + cnt);
//		cnt = 0;
//		week_day = (first_day + 31 + second + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 5) % 7;
//		while ((week_day + cnt) % 7 != 4)
//		{
//			cnt++;
//		}
//		printf("%d-%02d-%02d\n", year, 11, 1 + cnt + 21);
//		printf("%d-%02d-%02d\n", year, 12, 25);
//		cout << endl;
//
//
//	}
//
//	//cout << (sum[2021]+31+28+3+5) % 7 << endl;
//	return 0;
//}


#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		printf("%d = ", n);
		for (int i = 2; i <= sqrt(n); i++)
		{
			while (n != i)
			{
				if (n%i == 0)
				{
					printf("%d * ", i);
					n /= i;//合数它一定能够被某个素数整除 一直获取最小的素数 
				}
				else
				{
					break;
				}
			}
		}
		printf("%d\n", n);
	}
	return 0;
}





