/*����һ������ע��
*�ļ�����T6_21.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*����: ż�� 
*/#include <iostream>
#include <string>

using namespace std;

int iseven(int a)
{
	
	if(0==a%2)
	{
		return 1; 
	}else {return 0;
	}
} 
int main()
{
	int arr[9999];
	int x,a;
	
	cout<<"Please input the number you want to check: ";
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
		a=arr[i];
		cout<<iseven(a);
		
	}
} 
