/*
FileName : T4_28.cpp
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
	for (int i = 1; i <= 8; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 1; j <= 8; j++)
			{
				cout << "*";
				cout << " ";
			}
			cout << endl;
		}
		else
		{
			for (int j = 1; j <= 8; j++)
			{
				cout << " ";
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}
