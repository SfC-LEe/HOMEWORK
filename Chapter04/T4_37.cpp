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
	cout << "�ٶ����������˿�70���ڣ����˿�������Ϊ2%��" << endl;
	cout << "��n��  \t" << "Ԥ���˿� \t" << "�����˿���\t"<<endl;
	double s = 70.0,z;
	for (int i = 1; i <= 75;i++)
	{
		z = s * 0.02;
		s += z;
		cout << i << "\t" << s << "    \t" << z << "\t\n";
	}
	return 0;
}