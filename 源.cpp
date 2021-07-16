//hannuo
#include<iostream>
using namespace std;
void hannuo(int n, char A, char B, char C);
int main() {
	int n;
	cin >> n;//输入盘子的个数
	hannuo(n, 'A', 'B', 'C');
	return 0;
}

void hannuo(int n, char A,char B, char C) 
//将A做上的N个盘子移到C盘上
{
	if (n == 1) 
	{
		cout << A << "->" << C << endl;//直接将盘子从A盘移到C盘
	    return;//递归终止
	}
	hannuo(n - 1, A, C, B);//先将n-1个盘子从A盘移到B盘上
	cout << A << "->" << C<<endl;//再将一个A盘上的盘子移到C盘上
	hannuo(n - 1, B, C, A);//最后 将N-1个盘子从B移到C
	return;
}