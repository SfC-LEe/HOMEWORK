/*
FileName : T4_17.cpp
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
	cout << "Enter 10 numbers: " << endl;
	double counter = 1, number, largest;
	cin >> number;
	largest = number;
	while (counter < 10)
	{ 
		cin >> number;
		if (number > largest) { largest = number; }
		counter++;
	}
	cout << "Largest number: " << largest;
	return 0;
}
