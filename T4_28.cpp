/*����һ������ע��
*�ļ�����T4_28.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ��Ǻ�����ʽͼ�� 
*/#include <iostream>

using namespace std;

int main()
{
    int a=8,b=8;
    do
    {
        if(a%2==0)
        {
            while(b--){cout<<"*";cout<<" ";}
            cout<<endl;b=8;
        }
        else{
            while(b--){cout<<" ";cout<<"*";}
            cout<<endl;b=8;
        }

    }while(a--);

    return 0;
}
