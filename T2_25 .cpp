/*
FileName : T2_25.cpp
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
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		if(a%b==0)
		{
			cout<<"ÊÇ";
		}
		else{
			cout<<"·ñ";
		}
	}
	else
	cout<<"·ñ";
}
