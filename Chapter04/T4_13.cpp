/*
FileName : T4_13.cpp
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
	double a, b;//a代表行驶英里数，b代表用油加仑数。
	double sum1 = 0, sum2 = 0;
	while (1)
	{
		cout << "Enter miles driven (-1 to quit): ";
		cin >> a;
		if (a == -1)
		{
			break;
		}
		cout << "Enter gallons used: ";
		cin >> b;
		sum1 += a; sum2 += b;
		cout << "MGP this trip:　" << a/b << endl;
		cout << "Total MPG: " << sum1 / sum2 << endl;
	}
	return 0;
}
