/*����һ������ע��
*�ļ�����T6_19.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�ֱ��������б�ߵļ��� 
*/#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hypotenuse(double a,double b)
{
	double c;
	c=pow(a*a+b*b,0.5);
	return c;
	
}
int main()
{
	double a;double b;
	cin>>a>>b;
	cout<<setiosflags(ios::showpoint)<<hypotenuse(a,b);
} 
