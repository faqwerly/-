/*����һ������ע��
*�ļ�����T6_50.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ���ֵ�����밴���ô��� 
*/#include <iostream>
#include <iomanip>
using namespace std;

double tripleByValue(double x)
{
	return 3*x;
}
void tripleByReference(double &x)
{
	x*=3;
}
int main()
{
	cout<<fixed<<setprecision(3);
	double count;
	cin>>count;
	cout<<tripleByValue(count)<<endl;
	tripleByReference(count);
	cout<<count;
	return 0;
 } 
