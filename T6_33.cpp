/*����һ������ע��
*�ļ�����T6_33.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ���Ӳ�� 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool flip()
{
	int n;
	n=rand()%3+1;
	if(n==1) return true;
	else return false;
}
int main()
{
	srand(time(0));
	int n,a=0,b=0;
	for(int i=0;i<100;i++)
	{
		
		n=flip();
		if(n==1)
		{
			cout<<"Head"<<" ";
			a++;
		}
		else
		{
			cout<<"Tail"<<" ";
			b++;	
		}
	}
	cout<<endl;
	cout<<"Head is "<<a<<" times  Tail is "<<b<<" times";
	return 0;
 } 
