// ZZ~.cpp : �������̨Ӧ�ó������ڵ㡣
//���ϲ���

#include "stdafx.h"
#include<iostream>
#include<Windows.h>
#include<cmath>
using namespace std;

void A();
void B();
int main()
{
	char ch = 65;
	cout << "=============================" << endl
		<< "|| ��ӭʹ��ZZ������ By Tao ||" << endl
		<< "||  A:ֱ��  B:����  N.�˳� ||" << endl
		<< "=============================" << endl;
	cin >> ch;
	if (ch == 65 || ch == 97) { A(); }
	else if (ch == 66 || ch == 98) { B(); }
    return 0;
}
void A()
{
	int n = 1, t = 1, h; char tx;
	cout << "������߶�" << endl;
	cin >> h;
	cout << "��Ҫʲô���ţ�(��:* @ #)" << endl;
	cin >> tx;
	while (1)
	{
		while (t <= h)
		{
			Sleep(30);
			while (n <= t)
			{
				cout << tx;
				n++;
			}
			cout << endl;
			t++; n = 1;
		}
		while (t >= 1)
		{
			Sleep(30);
			while (n <= t)
			{
				cout << tx;
				n++;
			}
			cout << endl;
			t--; n = 1;
		}
		t = 1;
	}
}
void B()
{
	double n = 1, t, x = 0, h; char tx;
	cout << "������߶�" << endl;
	cin >> h;
	cout << "��Ҫʲô���ţ�(��:* @ #)" << endl;
	cin >> tx;
	while (1)
	{
		Sleep(30);
		t = 10.0 * sin(x) + 10.0 + h;
		while (n<=t)
		{
			cout << tx;
			n++;
		}
		cout << endl;
		x = x + 0.2; n = 1;
	}
}
