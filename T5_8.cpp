/*����һ������ע��
*�ļ�����T5_08.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���ܣ�������� 
*/ #include <iostream>
using namespace std;
int main()
{
	int a,min,i;
	cout<<"������Ҫ����ֵ�ĸ���a= " ;
	cin>>a;
	int arr[a];
	for(i=1;i<=a;i++)
	{
		cin>>arr[i];
		min=arr[1];
		
		if(arr[i]<min)
		{
			
			min=arr[i];
		 } 
	}
	cout<<min;
 } 
