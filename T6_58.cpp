/*����һ������ע��
*�ļ�����T6_58.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ��������ѧ������ѧ��ƣ�� 
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

void yesTips(int c)
{
	switch(c)
	{
		case 0:
			cout<<"Very good!"<<endl;
			break;
		case 1:
			cout<<"Excellent!"<<endl;
			break;
		case 2:
			cout<<"Nice work!"<<endl;
			break;
		default :
			cout<<"Keep up the good work!"<<endl;
			break;
	}
	cout<<endl;
}
void noTips(int c)
{
	switch(c)
	{
		case 0:
			cout<<"Wrong.Try once more."<<endl;
			break;
		case 1:
			cout<<"No.Please try again."<<endl;
			break;
		case 2:
			cout<<"Don't give up!"<<endl;
			break;
		default :
			cout<<"No.Keep trying>"<<endl;
			break;
	}	
}
int main()
{
	int a,b;
	int c;
	srand(time(0));
	while(questionCreating(a,b))
	{
		cout<<"Please input your answer��"<<endl;
		int n;
		cin>>n;
		if(n==a*b)
		{
			yesTips(rand()%4);
			continue;
		}
		while(n!=a*b)
		{
			noTips(rand()%4);
			cin>>n;
			if(n==a*b)
			{
				yesTips(rand()%4);
				break;
			}
			else
			{
				continue;
			} 
		}
	}
	return 0;
}
