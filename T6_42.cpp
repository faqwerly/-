/*����һ������ע��
*�ļ�����T6_42.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�����֮��ľ��� 
*/#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double distance(double x,double y,double p,double q)
{
	double l;
	l=(x-p)*(x-p)+(y-q)*(y-q);
	l=sqrt(l);
	return l;
 } 
int main()
{
	cout<<fixed<<setprecision(4);
	double a,b,m,n;
	cin>>a>>b>>m>>n;
	cout<<distance(a,b,m,n);
	return 0;
}
