/*
FileName : T4_14.cpp
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
	double acc, b_b, cg, cd, c_l, n_b;
	while (1)
	{
		cout << "Enter account number (or -1 to quit): ";
		cin >> acc ;
		if (acc == -1)
		{
			break;
		}
		cout << "Enter beginning balance: ";
		cin >> b_b;
		cout << "Enter total charges: ";
		cin >> cg;
		cout << "Enter total credits: ";
		cin >> cd;
		cout << "Enter credit limit: ";
		cin>>c_l;
		n_b = b_b + cg - cd;
		if (n_b > c_l)
		{
			cout << "Accout:       " << acc  << endl;
			cout << "Credit limit: " << c_l << endl;
			cout << "Balance:      " << n_b << endl;
			cout << "Credit Limit Exceeded." << endl;
		}
		else
		{
			cout << "New balance is " << n_b << endl;
		}
	}
	return 0;
}
