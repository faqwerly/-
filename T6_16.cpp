/*����һ������ע��
*�ļ�����T6_16.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ������ 
*/#include <iostream>
#include<time.h>
#include<stdlib.h> 
using namespace std;
int main()
{	int a;
	srand(time(0));
	a=1+rand()%2;
	cout<<a<<endl;
	a=1+rand()%100;
    cout<<a<<endl;
    a=0+rand()%10;
    cout<<a<<endl;
    a=1000+rand()%113;
    cout<<a<<endl;
    a=-1+rand()%1;
    cout<<a<<endl;
    a=-3+rand()%9;
    cout<<a<<endl;
}
 
