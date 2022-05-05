/*����һ������ע��
*�ļ�����T5_16.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���ܣ��������� 
*/
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int poww(int x,int y)
{
	int ans = 1;
	for(int i = 0; i < y; i ++ ) ans *= x;
	return ans;
}

int main()
{
	int amount = 1000,amount_cent = 0;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	
	cout << fixed << setprecision(2);
	
	for(int year = 1; year <= 10; ++ year)
	{
		amount_cent += amount * 21 % 20;
		amount = amount * 21 / 20;
		
		if(amount_cent >= 20){amount += 1; amount_cent -= 20;}
		
		cout << setw(4) << year << setw(21) << amount;
		if(amount_cent) cout << "." << amount_cent;
		cout << endl;
	}
}
