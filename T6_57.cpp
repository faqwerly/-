/*����һ������ע��
*�ļ�����T6_57.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ������������ѧ 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int questionCreating(int &a,int &b)
{
	
	a=rand()%50;
	b=rand()%50;
	cout<<"How much is "<<a<<" times "<<b<<endl;
	return 1;
}

int main()
{
	int a,b;
	srand(time(0));
	while(questionCreating(a,b))
	{
		cout<<"Please input your answer��"<<endl;
		int n;
		cin>>n;
		if(n==a*b) 
		{
			cout<<"Very good!"<<endl;
			break;
		}
		else
		{
			cout<<"No.Please try again";
		}
	}
	return 0;
}
