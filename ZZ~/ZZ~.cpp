// ZZ~.cpp : 定义控制台应用程序的入口点。
//智障波浪

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
		<< "|| 欢迎使用ZZ波浪器 By Tao ||" << endl
		<< "||  A:直线  B:波浪  N.退出 ||" << endl
		<< "=============================" << endl;
	cin >> ch;
	if (ch == 65 || ch == 97) { A(); }
	else if (ch == 66 || ch == 98) { B(); }
    return 0;
}
void A()
{
	int n = 1, t = 1, h; char tx;
	cout << "请输入高度" << endl;
	cin >> h;
	cout << "想要什么符号？(如:* @ #)" << endl;
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
	cout << "请输入高度" << endl;
	cin >> h;
	cout << "想要什么符号？(如:* @ #)" << endl;
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
