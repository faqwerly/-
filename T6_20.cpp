/*����һ������ע��
*�ļ�����T6_20.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*����: ���� 
*/#include<iostream>
using namespace std;
int multiple(int a, int b)
{
	int c,d;
	c=b%a;
	if(0==c)
	{
		d=1;
	}else{d=0;
	}return d;
}

int main()
{
	int a,b;
	cin>>a>>b;
	
	cout<<multiple(a,b);
		
}
