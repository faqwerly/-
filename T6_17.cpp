/*����һ������ע��
*�ļ�����T6_17.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ������ 
*/#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<algorithm>
using namespace std;
int main()
{
	int a[5],b[9999]={0},c[5];
	int d,e=0,f;
	srand(time(0));
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	 } 
	 b[0]=rand()%5;
	 cout<<a[b[0]]<<" ";
	 for(int i=1;i<9999;i++)
	 {f=0;
	 	b[i]=rand()%5;
	 	for(int d=i-1;d>=0;d--)
	 	{if(b[i]==b[d])
	 	{
	 		f=1;
		 }
		 
		}if(f==0)
		 {cout<<a[b[i]]<<" ";e++;
		 }
	 		if(e==4)
	 		{break;
			 }
	 }
	 
	
		 }

