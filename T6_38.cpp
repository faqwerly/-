/*����һ������ע��
*�ļ�����T6_38.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ���ŵ������ 
*/#include <iostream>
 
using namespace std;
void Hanota(int number,char first,char last,char temp)
{
	if(number==1)
	{
		cout<<first<<"��>"<<last<<endl;
		return ;
	}
	Hanota(number-1,first,temp,last);
	Hanota(1,first,last,temp);
	Hanota(number-1,temp,last,first);
	return ;
}

int main()
{
	int n;
	cin>>n;
	Hanota(n,'1','3','2');
	return 0;
}
