/*����һ������ע��
*�ļ�����T4_34.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ��׳� 
*/#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    if(n<0) ;
    else
    {
        if(n==0||n==1)cout<<1;
        else
        {while(n)
        {
            if(n==1) ;
            else sum*=n;
            n--;
        }
            cout<<sum;}
    }

    return 0;
}
