#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int dp[25];
class Solution {
public:
	int jumpFloorII(int number) {
		dp[0] = 1;
		dp[1] = 1;
		for (int i = 2; i <= 20; i++)
		{
			for (int j = 0; j<i; j++)
			{
				dp[i] += dp[j];
			}
			
		}
		return dp[number];
	}
};
int main()
{
	Solution().jumpFloorII(1);
	return 0;
}


//public class Solution {
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		String x;
//		String y;
//		while (scanner.hasNext())
//		{
//			x = scanner.next();
//			y = scanner.next();
//			BigDecimal n = new BigDecimal(x);
//			BigDecimal r = new BigDecimal(y);
//			BigDecimal tmp = new BigDecimal("6.28");
//			BigDecimal circle = r.multiply(tmp);//2¦Ðr
//			if (n.compareTo(circle) > 0) {
//				System.out.println("No");
//			}
//			else
//			{
//				System.out.println("Yes");
//			}
//
//
//		}
//
//
//	}
//}






