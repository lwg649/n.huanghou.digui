//hannuo
#include<iostream>
using namespace std;
void hannuo(int n, char A, char B, char C);
int main() {
	int n;
	cin >> n;//�������ӵĸ���
	hannuo(n, 'A', 'B', 'C');
	return 0;
}

void hannuo(int n, char A,char B, char C) 
//��A���ϵ�N�������Ƶ�C����
{
	if (n == 1) 
	{
		cout << A << "->" << C << endl;//ֱ�ӽ����Ӵ�A���Ƶ�C��
	    return;//�ݹ���ֹ
	}
	hannuo(n - 1, A, C, B);//�Ƚ�n-1�����Ӵ�A���Ƶ�B����
	cout << A << "->" << C<<endl;//�ٽ�һ��A���ϵ������Ƶ�C����
	hannuo(n - 1, B, C, A);//��� ��N-1�����Ӵ�B�Ƶ�C
	return;
}