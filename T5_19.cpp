/*����һ������ע��
*�ļ�����T5_19.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���� ���󦰵�ֵ 
*/
#include<iostream>

using namespace std;

int main()
{
	double ans = 0;
	int sg = 1;
	for(int i = 1; i <= 1000; i ++ )
	{
		double b = 2*i - 1;
		ans += sg/b;
		sg *= -1;
		cout << i << "\t" << 4*ans << endl;
	}
	
	return 0;
}
