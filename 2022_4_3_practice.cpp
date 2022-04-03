#define _CRT_SECURE_NO_WARNINGS 1




//import java.math.BigInteger;
//import java.util.Scanner;
//
//public class Solution5 {
//	public static void main(String[] args) {
//		Scanner scan = new Scanner(System.in);
//		int n = scan.nextInt();
//		BigInteger ans = new BigInteger("1");
//		for (int i = 0; i < n; i++)
//		{
//			String s = scan.next();
//			BigInteger t = new BigInteger(s);
//			ans = ans.multiply(t);
//		}
//		System.out.println(ans);
//	}
//
//}




//
//int ret = 0;
//int add = 0;
//int times(int x,int score)
//{
//	x -= ret;
//
//	if (x%score == 0)
//	{
//		add = 1;
//		ret = 0;
//		return x / score;
//	}
//	add = 1;
//	ret = (x / score + 1)*score%x;
//	return x / score + 1;
//}
//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n, x, y, z;
//		cin >> n >> x >> y >> z;
//		int mmax = (z / n);
//		int score = n;
//		int k = 0;
//		int x = 0;
//		while (1)
//		{	
//			int prev = mmax;
//			if (score <= x)
//			{
//				x += times(x,score);
//			}
//			else
//			{
//
//			}
//			k+=add;
//			
//			score = n + k*y; 
//			int ans= x + (z - ret) / score;;
//			if ((z - ret) % score != 0)
//			{
//				ans++;
//			}
//			mmax = min(mmax, ans);
//			if (mmax == prev)
//			{
//				break;
//			}
//			cout << mmax << endl;
//		}
//		//cout << mmax << endl;
//
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<double>v;
//int main()
//{
//	double a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		int x = a - 60;
//		int y = b - 60;
//		int z = c - 60;
//		v.push_back(x);
//		v.push_back(y);
//		v.push_back(z);
//		sort(v.begin(),v.end());
//		if (v[0] > 0)
//		{
//			printf("%.4f %.4f %.4f\n", v[0], v[1], v[2]);
//		}
//		else
//		{
//			printf("-1 -1 -1\n");
//		}
//	}
//
//	return 0;
//}


