/*����һ������ע��
*�ļ�����T4_24.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ���һ��ҡ������ 
*/#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(y==8)//1
    if(x==5)
       cout<<"@@@@@"<<endl;
    else
        cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    cout<<endl;

    cin>>x>>y;
    if(y==8)//2
    {
        if(x==5)cout<<"@@@@@"<<endl;
    }
    else{
        cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    }
    cout<<endl;

    cin>>x>>y;
    if(y==8)//3
    if(x==5)
       cout<<"@@@@@"<<endl;
    else
        {cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;}
    cout<<"&&&&&"<<endl;
    cout<<endl;

    cin>>x>>y;
    if(y==8)//4
    {if(x==5)
       cout<<"@@@@@"<<endl;}
    else
        {cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;}
    cout<<endl;
    return 0;
}
