/*����һ������ע��
*�ļ�����T6_37.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�쳲��������еĵ����汾 
*/#include <iostream>

using namespace std;
int fibonacci(int n)
{
	int m[n];
	for(int i=0;i<n;i++)
	{
		if(i<2) m[i]=i;
		else m[i]=m[i-1]+m[i-2];
	}
	return m[n-1];
}
int main()
{
	cout<<"fabonacci is ";
	for(int i=0;i<=10;i++)
	{
		cout<<fibonacci(i)<<" ";
	}
	return 0;
}
