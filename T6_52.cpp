/*����һ������ע��
*�ļ�����T6_52.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�����ģ��maximum 
*/#include <iostream>

using namespace std;
template <typename T>
T minimum(T x,T y)
{
	if(x>y) x=y;
	return x;
}

int main()
{
	
	 int a,b;
	 cin>>a>>b;
	 cout<<minimum(a,b)<<endl;
	 double p,q;
	 cin>>p>>q;
	 cout<<minimum(p,q)<<endl;
	 char x,y;
	 cin>>x>>y;
	 cout<<minimum(x,y);                                                                                        
	return 0;
}
