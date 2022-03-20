#include<iostream>
using namespace std;
int main()
{	float a,b;
	cout<<"请输入身高（m）"<<endl;
	cout<<"请输入体重(kg)"<<endl;
	cin>>a>>b;
	float BMI=b/a/a;
	cout<<BMI<<endl;
	cout<<"BMI VALUES"<<endl;
	cout<<"Underweight: less than 18.5"<<endl;
	cout<<"Normal: between 18.5 and 24.9"<<endl;
	cout<<"Overweight: between 25 and 29.9"<<endl;
	cout<<"Obese: 30 or greater";
 } 
