/*����һ������ע��
*�ļ�����T6_14.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ������ض�С������ 
*/
#include<iostream>
#include<cmath> 
using namespace std;
double roundToInteger(double number)
{
	double a;
	a=floor(number*10+0.5)/10;
	
	return a;
}
double roundTenths(double number)
{
	double b;
	b=floor(number*100+0.5)/100;
	return b;
}
double roundToHundredths(double number)
{
	double c;
	c=floor(number*1000+0.5)/1000;
	return c;
}
double roundToThousandths(double number)
{
	double d;
	d=floor(number*10000+0.5)/10000;
    return d;	
}
int main()
{
	double number;
	int select;
	while (0==select)
	{
	    double number;
	    cout<<"��������Ҫת��������"; 
	    cin >> number;
	    cout<<roundToInteger(number)<<" "<<roundTenths(number)<<" "<<roundToHundredths(number)<<" "<<roundToThousandths(number)<<endl;
		cout<<"\nҪ���������������������𣿼���������0����������������" <<endl;
		cin>> select; 
    } 
    cout<<"*****�����ѽ���*****"<<endl;
}  
