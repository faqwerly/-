/*����һ������ע��
*�ļ�����T5_12.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���ܣ�ʹ��Ƕ�׵�forѭ������ͼ�� 
*/
#include<iostream>

using namespace std;

int main()
{
	int n;cin >> n;

	for(int j = 1;j <= n; j ++ )
	{
		for(int k = 1; k <= j; k ++ ) cout << "*";
		for(int k = n - j; k > 0; k -- ) cout << " ";
		cout << endl;
	}
	
	cout << endl;
	for(int j = 1;j <= n; j ++ )
	{
		for(int k = n - j; k > 0; k -- ) cout << " ";
		for(int k = 1; k <= j; k ++ ) cout << "*";
		cout << endl;
	}
	
	cout << endl;
	for(int j = 1;j <= n; j ++ )
	{
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		cout << endl;
	}
	
	cout << endl;
	for(int j = 1;j <= n; j ++ )
	{
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		cout << endl;
	}

	for(int j = 1; j <= n; j ++ )
	{
		for(int k = 1; k <= j; k ++ ) cout << "*";
		for(int k = n - j; k > 0; k -- ) cout << " ";
		cout << "\t\t";
		for(int k = n - j; k > 0; k -- ) cout << " ";
		for(int k = 1; k <= j; k ++ ) cout << "*";
		cout << "\t\t";
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		cout << "\t\t";
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		cout << "\t\t";
		cout << endl;
	}
	
	
	return 0;
}
