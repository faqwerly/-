/*����һ������ע��
*�ļ�����T6_29.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ����� 
*/#include <iostream>
#include <cmath> 
using namespace std;
bool isPrime(int x)
{
	int a=1;
	x=sqrt(x)+2;
	if(x==1) return false;
	else
	{
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			{
				a=0;break;
			}
		}
		if(a==1) return true;
		else return false;
	}
	
}
int main()
{
	for(int i=2;i<10001;i++)
	{
		if(isPrime(i)) cout<<i<<endl;
	}
	return 0;
}
