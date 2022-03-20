/*
FileName : T4_16.cpp
Author   : Guo Yu Li
E-mail   : 1223214046@qq.com
Date     : Mar 6th,2022
College  : School of Computer Science and Information Engineering
Function : Homework

*/
#include<iostream>
using namespace std;
int main()
{
	double h, r;
	while (1)
	{
		cout << "Enter hours worked (-1 to end): ";
		cin >> h;
		if (h == -1) { break; }
		cout << "Enter houly rate of the employee ($00.00): ";
		cin >> r;
		if (h <= 40) { cout << "Salary is $" << h * r << endl; }
		else { cout << "Salary is $" << 40 * r + (h - 40) * 1.5 * r << endl; }
	}
	return 0;
}
