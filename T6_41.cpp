/*����һ������ע��
*�ļ�����T6_41.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ��ݹ�����Լ�� 
*/#include <iostream>

using namespace std;
int gcd(int x,int y)
{
	int t;
	if(x<y)
	{
		t=x;x=y;y=t;
	}
	if(y==0) return x;
	return gcd(y,x%y);
	
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n);
	return 0;
}
