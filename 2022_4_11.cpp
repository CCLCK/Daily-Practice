#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int num, n;
	vector<int>a(10000000);
	a[0] = a[1] = 0;
	double sum = 0;
	for (int i = 2; i < 10000000; i++)
	{
		sum += log10(i * 1.0);
		a[i] = ceil(sum);
	}
	cin >> num;
	while (cin >> n)
	{
		cout << a[n] << endl;
	}

	system("pause");
	return 0;
}







