/*����һ������ע��
*�ļ�����T6_27.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�����С�� 
*/#include <iostream>
#include <iomanip>
using namespace std;
double min(double a,double b,double c)
{
	int t;
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	if(a>c)
	{
		t=a;a=c;c=t;
	}
	if(b>c)
	{
		t=b;b=c;c=t;
	}
	return a;
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(2)<<min(a,b,c);
	return 0;
}
