/*����һ������ע��
*�ļ�����T6_49.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�Բ������� 
*/#include <iostream>
#include <iomanip>
#define PI 3.1415
using namespace std;

inline double S(const double r)
{
	return PI*r*r; 
}
int main()
{
	cout<<fixed<<setprecision(4); 
	int r;
	cin>>r;
	cout<<S(r);
	return 0;
}
