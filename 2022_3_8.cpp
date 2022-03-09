#define _CRT_SECURE_NO_WARNINGS 1





////addr key next
////输入进去如果有不符合条件的就不连接
////开一个int的数组addr 然后把所有数据输入进去  addr[输入] = 1
////搞一个map<addr, key>  ，map<addr, next>  开三个vector
////开始链接 从头往后开始扫描 如果符合就放入vector链接，记录下三个数据的值
////不符合就另外开空间放进去
////符合依据：开一个bool数组
////然后打印
//
//bool a[10005];//记录
//map<int, int>m;//addr key
//map<int, int>m1;//addr next
//int main()
//{
//	int begin, n;
//	cin >> begin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int addr, key, next;
//		cin >> addr >> key >> next;
//		m[addr] = key;
//		m1[addr] = next;
//	}
//	vector<int>add;
//	vector<int>k;
//	vector<int>nex;
//
//	vector<int>nex2;
//	while (begin != -1)
//	{
//		if (a[abs(m[begin])] == 0)
//		{
//			add.push_back(begin);
//			k.push_back(m[begin]);
//			nex.push_back(m1[begin]);
//			a[abs(m[begin])] = 1;
//		}
//		else
//		{
//			nex2.push_back(begin);
//			nex.pop_back();
//			nex.push_back(m1[begin]);
//		}
//		begin = m1[begin];
//	}
//	int len = k.size();
//	int len2 = nex2.size();
//	for (int i = 0; i < len; i++)
//	{ 
//		if (i == len - 1)
//		{
//			printf("%05d %d -1\n", add[i], k[i]);
//		}
//		else
//		{
//			printf("%05d %d %05d\n", add[i], k[i], nex[i]);
//		}
//		
//	}
//	for (int i = 0; i < len2; i++)
//	{
//		if (i == len2 - 1)
//		{
//			printf("%05d %d -1\n", nex2[i], m[nex2[i]]);
//		}
//		else
//		{
//			printf("%05d %d %05d\n", nex2[i], m[nex2[i]], nex2[i + 1]);
//		}
//		
//	}
//	return 0;
//}


//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int cnt = 0;
//		for (int i = 0; i < 32; i++)
//		{
//			if ((n >> i) & 1)
//			{
//				cnt++;
//			}
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}



////没写来
//class Gloves {
//public:
//	int findMinimum(int n, vector<int> left, vector<int> right) {
//		// write code here
//		int sum = 0;
//		int mmin_left = 0x7fffffff;
//		int mmin_right = 0x7fffffff;
//		int x = 0, y = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (left[i] == 0)
//			{
//				sum += right[i]; 
//				right[i] = 0;
//			}
//			else
//			{
//				x += left[i];
//				mmin_left = min(mmin_left, left[i]);
//			}
//			if (right[i] == 0)
//			{
//				sum += left[i]; 
//				left[i]=0;
//			}
//			else
//			{
//				y += right[i];
//				mmin_right = min(mmin_right, right[i]);
//			}
//		}
//		x -= mmin_left;
//		y -= mmin_right;
//		int ans = min(x, y);
//		sum += ans;
//		sum += 2;
//		return sum;
//	}
//};

//class A
//{
//public:
//	void f()
//	{
//		cout << "A" << endl;
//	}
//};
//class B : public A
//{
//public:
//	 void f()
//	{
//		cout << "B" << endl;
//	}
//};
//
//int main()
//{
//	/*A a;
//	B b;
//	a.f();
//	b.f();*/
//
//	/*A* b = new B;
//	b->f();*/
//
//	/*B* b = (B*)new A;
//	b->f();*/
//
//	//如果没有重写 就看声明类型
//	//如果重写了 就看看new的类型
//	return 0;
//}


