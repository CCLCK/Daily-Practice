#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//int a[100005];
//int GetAns(int n)
//{
//	int cnt = 0;
//	for (int i = 1; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			cnt+=2;
//		}
//	}
//	int x = sqrt(n);
//	if (x*x == n)
//	{
//		cnt--;
//	}
//	return cnt;
//}
//int main()
//{
//	//a[1] = 1;
//	//for (int i = 2; i <= 100000; i++)
//	//{
//	//	int j = i;
//	//	a[j]++;
//	//	while (j <= 100000)
//	//	{
//	//		a[j]++;
//	//		j += i;
//	//	}
//	//}
//	int n;
//	while (~scanf("%d", &n))
//	{
//		cout << GetAns(n) << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	int n, k, i;
//	while (cin >> n)
//{
//		k = 0;
//		for (i = 2; i <= sqrt(n); i++)
//		{
//			if (n%i == 0)
//			{
//				while (n%i == 0)
//				{
//					n = n / i;
//				}
//				k++;
//				cout << i << " ";
//			}
//		}	
//		if (n != 1)k++;
//		cout << k << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//map<char, char>m;
//int main()
//{
//	m['A'] = 'V';
//	m['B'] = 'W';
//	m['C'] = 'X';
//	m['D'] = 'Y';
//	m['E'] = 'Z';
//	m['F'] = 'A';
//	m['G'] = 'B';
//	m['H'] = 'C';
//	m['I'] = 'D';
//	m['J'] = 'E';
//	m['K'] = 'F';
//	m['L'] = 'G';
//	m['M'] = 'H';
//	m['N'] = 'I';
//	m['O'] = 'J';
//	m['P'] = 'K';
//	m['Q'] = 'L';
//	m['R'] = 'M';
//	m['S'] = 'N';
//	m['T'] = 'O';
//	m['U'] = 'P';
//	m['V'] = 'Q';
//	m['W'] = 'R';
//	m['X'] = 'S';
//	m['Y'] = 'T';
//	m['Z'] = 'U';
//	m[' '] = ' ';
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	int ans = (i - 5 + 26) % 26;
//	//	printf("m['%c']='%c';\n", 'A' + i, ans + 'A');
//	//}
//	
//	string str;
//	while (getline(cin,str))
//	{
//		for (int i = 0; i < str.size(); i++)
//		{
//			cout << m[str[i]];
//		}
//		cout << endl;
//	}
//	return 0;
//}


#include<iostream>
using namespace std;


int main()
{
	

	return 0;
}

