#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,sum=0,dig,s;
    cin>>num;
    s=num;
    while (num!=0)
    {
        dig=num%10;
        sum=sum+(int)(pow(dig,3));
        num=num/10;
    }
    num=s;
    cout<<sum<<endl;
    if (num==sum)
    {
        cout<<num<<" is an armstrong number";
    }
    else
    {
        cout<<num<<" is not an armstrong number";
    }
}