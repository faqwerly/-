/*����һ������ע��
*�ļ�����T6_36.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ��ݹ�����ݼ��� 
*/#include <iostream>

using namespace std;
int power(int base,int exponent)
{
	int n=1;
	if(exponent==1) return base;
	else n=base*power(base,exponent-1);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<power(m,n);
	return 0;
}
