/*����һ������ע��
*�ļ�����T6_23.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ����������ɵķ���ͼ�� 
*/
#include <iostream>
using namespace std;
void square(int side )
{
	char fillCharacter;
	cin>>fillCharacter;
	for(int i=0;i<side;i++)
	{
		cout<<fillCharacter;
		for(int j=0;j<side-1;j++)
		{
			cout<<fillCharacter;
			
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
