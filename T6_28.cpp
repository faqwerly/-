/*����һ������ע��
*�ļ�����T6_28.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ�ȫ�� 
*/#include <iostream>

using namespace std;
bool isperfect(int number)
{
	int sum=1;
	for(int i=2;i<number;i++)
	{
		if(number%i==0) sum+=i;
	}
	if(number==sum) return true;
	else  return false;
}
int main()
{
	for(int i=1;i<1001;i++)
	{
		if(isperfect(i)) cout<<i<<endl;
	}
	return 0;
 } 
