/*
FileName : T2_19.cpp
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
	int a, b, c, n_A, PLUS, MIN, MAX;
    cin >> a >> b >> c;
	cout << "Input three different integers: " <<a<<" "<<b<<" "<<c << endl;
	cout << "Sum is " << a + b + c << endl;
	n_A = (a + b + c) / 3;
	cout<<"Average is "<<n_A<<endl;
	PLUS=a *b*c;
	cout<< "Product is "<<PLUS<<endl;
	if (a < b)
	{
		if (a < c)
		{
			MIN = a;
		}
		if (a > c)
		{
			MIN = c;
		}
	}
	if (b < a)
	{
		if (b < c)
		{
			MIN = b;
		}
		if (b > c)
		{
			MIN = c;
		}
	}//smallest
	if (a > b)
	{	if (a < c)
		{
			MAX = c;
		}
		if (a > c)
		{
			MAX = a;
		}
		
	}
	if (b > a)
	{
		if (b < c)
		{
			MAX = c;
		}
		if (b > c)
		{
			MAX = b;
		}
		
	}//largest
	cout << "Smallest is " << MIN;
	cout << "Largest is " << MAX;
}
