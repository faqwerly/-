/*����һ������ע��
*�ļ�����T6_60.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ������������ѧ���Ѷȵȼ� 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int questionCreating(int &a,int &b)
{
	int level=0,value=0;
	while(!level)
	{
		cout<<"Please choose the difficult level(1 or 2):"<<endl;
		cin>>level;
		if(level==1||level==2)
		{
			break;
		}
		else
		{
			cout<<"You input a wrong level!Input again." <<endl;
			level=0;
		}
	}
	
	switch(level)
	{
		case 1:
			value=10;
			break;
		case 2:
			value=100;
			break;
	}
	a=rand()%value;
	b=rand()%value;
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
			cout<<"No.Keep trying."<<endl;
			break;
	}	
}
int main()
{
	int a,b;
	int c;
	int cntAll=0,cntyes=0;
	srand(time(0));
	while(questionCreating(a,b))
	{
		if(cntAll==10)
		{
			if(1.0*cntyes/cntAll<0.75)
			{
				cout<<"Please ask your teacher for extra help."<<endl;
				cntAll=0;cntyes=0;
				continue;
			}
			else
			{
				cout<<"Congratulations,you are ready to the next level!";
				cntAll=0;cntyes=0;
				continue;
			 } 
		}
		cout<<"Please input your answer��"<<endl;
		int n;
		cin>>n;
		if(n==a*b)
		{
			cntAll++;cntyes++;
			yesTips(rand()%4);
			continue;
		}
		while(n!=a*b)
		{
			cntAll++;
			noTips(rand()%4);
			cin>>n;
			if(n==a*b)
			{
				cntAll++;cntyes++;
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
