/*����һ������ע��
*�ļ�����T5_20.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.26
*ѧԺ��School of Computer Information and Engineering
*���� ���ϴ��˹������Ԫֵ 
*/
#include<bits/stdc++.h>

using namespace std;

int const N = 500;

int sum;
int ans[N],cnt;

int sqr_t(int a,int b)
{
	return sqrt(a*a + b*b);
}

int main()
{
	for(int i = 1; i < N; i ++ )
	{
		for(int j = i; j < N; j ++ )
		{
			int m = sqr_t(i,j);
			if(m < N && m*m == i*i + j*j)
			{
				cout << i << " " << j << " " << m << endl;
				ans[++ cnt] = m;
			}
		}
	}
	
	cout << cnt << endl;
//	for(int i = 1; i <= cnt; i ++ ) cout << ans[i] << endl; 
} 
