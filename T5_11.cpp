/*����һ������ע��
*�ļ�����T5_11.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���ܣ����� 
*/ #include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
   double amount;
   double principal=1000.0;
   double rate;
   cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
   for(rate=0.05;rate<=0.1;rate+=0.01)
 {
   
   for(unsigned year=1;year<=5;year++)
      {
   	amount=principal*pow(1.0+rate,year);
   	cout<<setw(4)<<year<<setw(21)<<amount<<endl;
   	
      }
      cout<<endl;
 }
}
