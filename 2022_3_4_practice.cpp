#define _CRT_SECURE_NO_WARNINGS 1




//class BinInsert {
//public:
//	int binInsert(int n, int m, int j, int i) {
//		// write code here
//		
//		return (m<<j)+n;
//	}
//};
//int main()
//{
//	int x = 19;
//	cout << (BinInsert().binInsert(1024, 19, 2, 6)) << endl;
//	cout << (x << 2) << endl;
//	return 0;
//}

#include<iostream>
using namespace std;

bool a[10005];
bool check(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

void GetPrimerNum()
{
	for (int i = 2; i < 10000; i++)
	{
		if (check(i))
		{
			a[i] = 1;
		}
	}

}

int main()
{
	GetPrimerNum();
	int n;
	while (cin >> n)
	{
		int x, y;
		x = y = n / 2;
		while (1)
		{
			if (a[x] && a[y])
			{
				cout << x << endl << y << endl;
				break;
			}
			else
			{
				x++;
				y--;
			}
		}
		
		
	}
	return 0;
}





