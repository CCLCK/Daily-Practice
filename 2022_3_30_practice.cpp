#define _CRT_SECURE_NO_WARNINGS 1


//
//int main()
//{
//	string s, t;
//	while (cin>>s>>t)
//	{
//		int cnt = 0;
//		int len = t.size();
//		int ans = s.find(t);
//		while (ans!=string::npos)
//		{
//			ans = s.find(t, ans+len);
//			cnt++;
//		}
//		cout << cnt << endl;
//	}
//
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
ll a[100];
int main()
{
	/*int from, to;
	while (cin>>from>>to)
	{

	}*/
	int t1 = 1,t2=1;
	a[2] = 1;
	a[1] = 1;
	for (int i = 3; i <= 80; i++)
	{
		a[i] = t1 + t2;
		t1 = t2;
		t2 = a[i];
	}

	return 0;
}

//java
//import java.math.BigInteger;
//import java.util.Scanner;
//
//public class Solution3 {
//	public static void main(String[] args) {
//		BigInteger[] b = new BigInteger[100];
//		b[1] = new BigInteger("1");
//		b[2] = new BigInteger("1");
//		BigInteger t1 = b[1], t2 = b[2];
//		for (int i = 3; i <= 80; i++)
//		{
//			b[i] = t1.add(t2);
//			t1 = t2;
//			t2 = b[i];
//			//            System.out.println(b[i]);
//		}
//		Scanner scan = new Scanner(System.in);
//		int from, to;
//		while (scan.hasNext())
//		{
//			from = scan.nextInt();
//			to = scan.nextInt();
//			BigInteger ans = new BigInteger("0");
//			for (int i = from; i <= to; i++)
//			{
//				ans = ans.add(b[i]);
//			}
//			System.out.println(ans);
//		}
//	}
//
//
//}
