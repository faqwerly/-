/*����һ������ע��
*�ļ�����T6_18.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ����ݼ��� 
*/#include <iostream>
using namespace std;
int integerPower(int base, int exponent)
{
	int i=1;
	int sum=base;
	while(i<exponent)
	{
		sum=sum*base;
		i++;
	}
	return sum;
	
}
int main()
{
	int base;
	int exponent;
	cin>>base;
	cin>> exponent;
	cout<<integerPower(base,exponent);
}
