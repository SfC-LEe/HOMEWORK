/*
FileName : T4_37.cpp
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
	cout << "假定今年世界人口70（亿），人口增长率为2%。" << endl;
	cout << "第n年  \t" << "预期人口 \t" << "增长人口数\t"<<endl;
	double s = 70.0,z;
	for (int i = 1; i <= 75;i++)
	{
		z = s * 0.02;
		s += z;
		cout << i << "\t" << s << "    \t" << z << "\t\n";
	}
	return 0;
}
