/*����һ������ע��
*�ļ�����T6_32.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.4.14
*ѧԺ��School of Computer Information and Engineering
*���ܣ��ɼ��ļ��� 
*/#include <iostream>

using namespace std;
void qualityPoints(int x)
{
	int a;
	if(x<=100&x>=90) a=4;
	if(x<=89&&x>=80) a=3;
	if(x<=79&&x>=70) a=2;
	if(x<=69&&x>=60) a=1;
	if(x<60) a=0;
	cout<<a;
}
int main()
{
	int n;
	cin>>n;
	qualityPoints(n);
	return 0;	
}
