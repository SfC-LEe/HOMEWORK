/*
FileName : T4_19.cpp
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
	int n,a1,a2;
	cin>>n;
	a1=n;
	a2=n;
	int i=9;
	while(i>0)
	{
		cin>>n;
		if(n>a2&&n<a1){a2=n;
		}
		if(n>a1){a2=a1;
		a1=n;
		}
		i--;
	}
	
	cout<<a1<<" "<<a2;
	
	
	
	
	
	
	
	
}
