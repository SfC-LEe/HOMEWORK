/*
FileName : T2_23.cpp
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
	int min, max,n,n1;
	cout<< "请输入5个整数： ";
	cin>>n;
	min=n;
	max=n;
	int i=4;
	while(i>0)
	{
		cin >> n1;
		if (n1<min)min = n1;
		if (n1>max)max = n1;
		i--;
	}
	cout<< "最大数： "<< max<<endl;
	cout<< "最小数： " <<min<<endl;
	return 0;
}
