/*����һ������ע��
*�ļ�����T6_31.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ����Լ�� 
*/#include <iostream>

using namespace std;
int gcd(int a,int b)
{
	int t;
	if(a<b)
	{
		t=a;a=b;b=t;
	 } 
	while(b!=0)
	{
		int n;
		n=a%b;
		a=b;b=n;
	}
	return a;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n);
	return 0;
}
