/*����һ������ע��
*�ļ�����T6_30.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ����ַ��� 
*/#include <iostream>
#include <cstring>
using namespace std;
void fan(char x[],int l)
{
	for(int i=l-1;i>=0;i--)
	{
		cout<<x[i];
	}
}
int main()
{
	char m[30];
	cin>>m;
	int l;
	l=strlen(m);
	fan(m,l); 
	return 0;
}
