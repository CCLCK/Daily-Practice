#define _CRT_SECURE_NO_WARNINGS 1



//int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int mon[] = { 0, 62, 28, 31, 60, 31, 60, 31, 62, 60, 62, 30, 62 };
//int ey[] = { 0, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2 };
//bool check(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int year1, month1, day1;
//	int year2, month2, day2;
//	int sum = 0;
//	for (int i = 1; i <= 12; i++)
//	{
//		sum += mon[i];
//	}
//	
//	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
//	{long long ans = 0;
//		int t1 = year1, t2 = year2;
//		while (t1!=t2)
//		{
//			ans += sum;
//			if (check(t1))
//			{	
//				ans++;
//			}
//			t1++;
//		}
//		if (month1 < month2&&day1 <= day2)
//		{
//			int t1 = (days[month1] - day1 + 1)*ey[month1];
//			int t2 = day2*ey[month2];
//			int t3 = 0; 
//			while (month1 != month2-1)
//			{
//				month1++;
//				t3 += mon[month1];
//			}
//			ans = ans + t1 + t2 + t3;
//		}
//		else if (month1<month2&&day1>day2)
//		{
//			int t1 = (days[month1] - day1 + 1)*ey[month1];
//			int t2 = day2*ey[month2];
//			int t3 = 0;
//			while (month1 != month2 - 1)
//			{
//				month1++;
//				t3 += mon[month1];
//			}
//			ans = ans + t1 + t2 + t3;
//
//		}
//		else if (month1 == month2&&day1 <= day2)
//		{
//			int t1 = (day2 - day1 + 1)*ey[month1];
//			ans += t1;
//		}
//		else if (month1 == month2&&day1 > day2)
//		{
//			int t1 = (day1 - day2)*ey[month1];
//			ans -= t1;
//		}
//		else if (month1 > month2&&day1 <= day2)
//		{
//			//5 1   3 5
//			int t1 = day1*ey[month1];
//			int t2 = day2*ey[month2];
//			int t3 = 0;
//			while (month2 != month1 - 1)
//			{
//				month2++;
//				t3 += mon[month2];
//			}
//			ans = ans - t1 - t2 - t3;
//		}
//		else if (month1 > month2&&day1 > day2)
//		{// 5 5 3 3
//			int t1 = day1*ey[month1];
//			int t2 = day2*ey[month2];
//			int t3 = 0;
//			while (month2 != month1 - 1)
//			{
//				month2++;
//				t3 += mon[month2];
//			}
//			ans = ans - t1 - t2 - t3;
//		}
//		cout << ans << endl;
//		/*int tmp = days[month1] - day1 + 1;
//		int tmp2 = days[month2] - day2 + 1;*/
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
int fib[100005];
int main()
{
	long long t1 = 1, t2 = 1;
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i <= 100000; i++)
	{
		long long t = t1 + t2;
		t1 = t2 % 1000000;
		t2 = t % 1000000;
		fib[i] = t2;
	}
	int n;
	bool f = 0;
	while (cin >> n)
	{
		if (fib[n] >= 100000)
		{
			f = 1;
		}
		if (f)
		{
			printf("%06d\n", fib[n]);//有些6位数字前面第一个是0
		}
		else{
			printf("%d\n", fib[n]);
		}

	}
	return 0;
}





