/*����һ������ע��
*�ļ�����T5_24.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���� ���޸��Ǻŵ�����ͼ�� 
*/
#include<iostream>

using namespace std;

int main()
{
	int len; cin >> len;
	int n = (len - 1) >> 1;
	
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 0; j < (n - i + 1); j ++ ) cout << " ";
		for(int j = 0; j < 2*i - 1; j ++ ) cout << "*";
		for(int j = 0; j <= (n - i + 1); j ++ ) cout << " ";
		cout << endl;
	}
	
	for(int i = 0; i < len; i ++ ) cout << "*";
	cout << endl;
	
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 0; j < i; j ++ ) cout << " ";
		for(int j = 0; j < 2*n - 2*i + 1; j ++ ) cout << "*";
		for(int j = 0; j <= i; j ++ ) cout << " ";
		cout << endl;
	}
	
	
	
	
	return 0;
} 
