#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<stack>
using  namespace std;

////����һ������->��ȥ����������� �ҵ��������Ĳ�
//
//int a[] = { 0,
//1,
//1,
//2,
//3,
//5,
//8,
//13,
//21,
//34,
//55,
//89,
//144,
//233,
//377,
//610,
//987,
//1597,
//2584,
//4181,
//6765,
//10946,
//17711,
//28657,
//46368,
//75025,
//121393,
//196418,
//317811,
//514229,
//832040,
//1346269 };
//int main()
//{
//	int n;
//	cin >> n;
//	int ans = 2147483647;
//	for (auto e : a)
//	{
//		int x = abs(e - n);
//		ans = min(ans, x);
//	}
//	cout << ans << endl;
//	return 0;
//}

//��������ַ��� �����( ����ջ  �ǣ��ͳ�ջ  ��Ȼֱ���˳�
//���ջ�Ƿ�Ϊ��
//stack<int> st;
//bool  test(string A, int n)
//{
//	if (n % 2 == 1)
//	{
//		return false;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (A[i] == '(')
//		{
//			st.push(A[i]);
//		}
//		else if (A[i] == ')')
//		{
//			if (!st.empty())
//			{
//				st.pop();
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else
//		{
//			return false;
//		}
//	}
//	if (st.empty())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//
//	return 0;
//}








