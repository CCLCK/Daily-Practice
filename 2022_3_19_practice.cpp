#define _CRT_SECURE_NO_WARNINGS 1


//class Bonus {
//public:
//	int getMost(vector<vector<int> > board) {
//		// write code here
//		for (int i = 1; i < board.size(); i++)
//		{
//			board[i][0] += board[i - 1][0];
//		}
//		for (int i = 1; i < board[0].size(); i++)
//		{
//			board[0][i] += board[0][i - 1];
//		}
//		for (int i = 1; i<board.size(); i++)
//		{
//			for (int j = 1; j < board[i].size(); j++)
//			{
//				board[i][j] = max(board[i - 1][j], board[i][j - 1]) + board[i][j];
//			}
//		}
//	}
//};

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[15][15];
int xx[] = { -1, 1, 0, 0 };
int yy[] = { 0, 0, -1, 1 };
bool vis[15][15];
int row, col;
bool f = 0;
vector<int>vx;
vector<int>vy;
void dfs(int x, int y)
{
	vis[x][y] = 1;
	if (x == row - 1 && y == col - 1)
	{		
		f = 1;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int tx = x + xx[i];
		int ty = y + yy[i];
		if (vis[tx][ty]==0&&tx>=0&&tx<row&&ty>=0&&ty<col&&a[tx][ty] == 0)
		{	
			dfs(tx,ty);	
			if (f == 1)
			{
				vx.push_back(tx);
				vy.push_back(ty);
				break;
			}
			else
			{
				vis[tx][ty] = 0;	
			}		
		}
	}
}

int main()
{	
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}
	dfs(0, 0);
	vx.push_back(0);
	vy.push_back(0);
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		if (vis[i][j] == 1)
	//		{
	//			printf("(%d,%d)\n", i, j);
	//		}
	//	}	
	//}
	for (int i = vx.size() - 1; i >= 0; i--)
	{
		printf("(%d,%d)\n", vx[i], vy[i]);
	}
	return 0;
}








