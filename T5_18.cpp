/*����һ������ע��
*�ļ�����T5_18.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���ܣ����Ʊ� 
*/
#include<iostream>

using namespace std;

void binary_func(int a)
{
	if(a) binary_func(a/2);
	if(!a) {if(a % 2) cout << 1;return;}
	cout << a%2;
}

int main()
{
	cout << "D\tB\t\tO\tH" << endl;
	for(int i = 1; i <= 256; i ++ )
	{
		cout << dec << i << '\t';
		binary_func(i); cout << "\t\t";
		cout << oct << i << '\t';
		cout << hex << i << endl;
		
	}
	
	return 0;
}
