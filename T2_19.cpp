/*����һ������ע��
*�ļ�����T2_19.cpp
*���ߣ�Yitong Han
*���䣺H2101870137@163.com
*���ڣ�2022.3.6
*ѧԺ��School of Computer Information and Engineering
*���ܣ��༭һ������������Ȼ��������ǵĺ͡�ƽ��ֵ���˻���������Сֵ����ʽ��������
*/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a,b,c,d,e,Sum,Average,Product;
    cout <<"Input three different integers: ";
    cin >>a>>b>>c;
    d=max(a,b);
    e=min(a,b);
    Sum=a+b+c;
    Average=(a+b+c)/3;
    Product=a*b*c;
    cout <<"Sum is "<<Sum;
    cout <<"Average is "<<Average;
    cout <<"Product is "<<Product;
    cout <<"Smallest is "<<min(e,c);
    cout <<"Largest is "<<max(d,c);
    return 0;

}
