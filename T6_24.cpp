/*����һ������ע��
*�ļ�����T6_16.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ����ַ��� 
*/#include  <iostream>
using namespace std;
int app(int a)//c��ʵ�ֵ
{
	for(int i=100000;i>=10;i=i/10)
	{
	cout<<a%i/(i/10)<<" "; 
	}
}
int main()
{

    int a,b;

	cin>>a>>b;
	cout<<a/b<<endl;//a��ʵ��
	cout<<a%b<<endl;//b��ʵ��
    app(a);
} 
