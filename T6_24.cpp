/*这是一个多行注释
*文件名：T6_16.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：数字分离 
*/#include  <iostream>
using namespace std;
int app(int a)//c的实现�
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
	cout<<a/b<<endl;//a的实现
	cout<<a%b<<endl;//b的实现
    app(a);
} 
