/*����һ������ע��
*�ļ�����T6_22.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ��Ǻ���ɵ�������ͼ�� 
*/
#include <iostream>
using namespace std;
void square(int side )
{
	for(int i=0;i<side;i++)
	{
		cout<<"*";
		for(int j=0;j<side-1;j++)
		{
			cout<<"*";
			
		}
		cout<<endl;
	}
}
int main()
{
 	int side;
	 cin>>side;
	 square(side);	
} 
