/*����һ������ע��
*�ļ�����T6_40.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ��ݹ�Ŀ��ӻ� 
*/#include <iostream>

using namespace std;
int factorial(int n)
{
	int x=1;

	if(n==1||n==0)
	{
		cout<<n<<" "<<x<<endl;
		return x;
	}
	x=n*factorial(n-1);	
	cout<<n<<" "<<x<<endl;
	return x;
}
int main()
{
	factorial(10);
	return 0;
}
