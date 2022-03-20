/*
FileName : T4_15.cpp
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
	while (1)
	{
		cout << "Enter sales in dollars (-1 to end): ";
		double n;
		cin >> n;
		if (n == -1) { break; }
		cout << "Salary is: $" << 200 + n * 0.09 << endl;
	}
	return 0;
}
