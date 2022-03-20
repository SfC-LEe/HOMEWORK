/*
FileName : T4_30.cpp
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
	double r,PI=3.14159;
	cout << "请输入圆的半径： " << endl;
	cin >> r;
	cout << "直径:  " << 2 * r << "\n周长： " << 2 * PI * r << "\n面积： " << PI * r * r << endl;
	return 0;
}
