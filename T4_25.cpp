/*����һ������ע��
*�ļ�����T4_25.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ��Ǻ������� 
*/#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;int a,b,c;a=x;b=x;c=x;
        while(a--){cout<<"*";}
        cout<<endl;
        x=x-2;
        while(x--)
        {
            while(b--){if(b==c-1||b==0)cout<<"*";else cout<<" ";}
            cout<<endl;b=c;
        }
        a=c;
        while(a--){cout<<"*";}
        cout<<endl;

    return 0;
}
