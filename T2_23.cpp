/*����һ������ע��
*�ļ�����T2_23.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.6
*ѧԺ��School of Computer Information and Engineering
*���ܣ�������������ҵ����ֵ����Сֵ
*/#include <iostream>
using namespace std;
int main ()
{
    int a[5];
	int min,max;
	for(int i=0;i<5;i++)
		cin >> a[i];
	max=a[0];min=a[0];
	for(int i=0;i<5;i++){
		int temp;
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	cout << min << " " << max <<endl;
	return 0;

}
