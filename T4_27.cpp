/*����һ������ע��
*�ļ�����T4_27.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ���ӡ����������ʮ����ֵ 
*/#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d=1,sum=0;
    cin>>a;
    while(a)
    {
        b=a/10;
        c=a-b*10;
        sum=sum+c*d;
        d=d*2;
        a=a/10;

    }
    cout<<sum;
    return 0;
}
