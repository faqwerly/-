/*����һ������ע��
*�ļ�����T6_25.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ��¶� 
*/#include <iostream>

using namespace std;
int cntTime(int h,int m,int s)
{
	return 3600*h+60*m+s;
}
int main()
{
	cout<<"Please input the time(hour-minute-second)"<<endl;
	int h,m,s;
	int t1,t2; 
	cin>>h>>m>>s;
	t1=cntTime(h,m,s);
	cin>>h>>m>>s;
	t2=cntTime(h,m,s);
	cout<<t2-t1; 
	return 0;
 } 
