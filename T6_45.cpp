/*����һ������ע��
*�ļ�����T6_45.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�
*/#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

int mystery(int,int);
int main()
{
	int x=0;
	int y=0;
	cin>>x>>y;
	cout<<"The result is "<<mystery(x,y)<<endl;
	return 0;
}
int mystery(int a,int b)
{
	if(b<0)
	{
		a=-a;b=-b;
	 } 
	if(b==1) return a;
	else return a+mystery(a,b-1);
}
