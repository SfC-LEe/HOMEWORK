/*
FileName : T4_25.cpp
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
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{	
			if(i==1||i==n)
			{
			cout<<"*";}
			else
			{
				if(j==1||j==n)
				{
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	}

