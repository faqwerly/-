/*����һ������ע��
*�ļ�����T4_32.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ������εı� 
*/#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c&&a+c>b&&b+c>a)
            cout<<"���Ա�ʾ�����ε�������";
            else cout<<"���ܱ�ʾ�����ε�������";
    }
    else cout<<"���ܱ�ʾ�����ε�������";
    return 0;
}
