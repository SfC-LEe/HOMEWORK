/*
FileName : T4_26.cpp
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
	cout << "请输入一个五位整数：　" << endl;
	int num,num1=0,num2;
	cin >> num;
	num2 = num;
	while (num)
	{
		num1 = num1 * 10 + num % 10;
		num /= 10;
	}
	if (num1 == num2) { cout << num2 << "是回文数" << endl; }
	else { cout << num2 << "不是回文数" << endl; }
	return 0;
}
