/*
FileName : T4_33.cpp
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
	double  a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
		{
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
				{
					cout<<"�������ֱ��������";
				}
				else{
					cout<<"���������ֱ��������";
				}
		}
		else
		cout<<"�������ֱ��������";
}
