/*����һ������ע��
*�ļ�����T6_53.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�����ģ��maximum 
*/#include <iostream>

using namespace std;
template <class T>
T maximum(T x,T y)
{
	if(x<y) x=y;
	return x;
 } 

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<maximum(a,b)<<endl;
	double x,y;
	cin>>x>>y;
	cout<<maximum(x,y)<<endl;
	char p,q;
	cin>>p>>q;
	cout<<maximum(p,q);
	return 0;
}
