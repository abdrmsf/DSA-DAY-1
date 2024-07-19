#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int lower,upper,dig,num,sum;
    cin>>lower>>upper;
    for(int i=lower;i<=upper;i++)
    {
    num=i;
    sum=0;
    while (num!=0)
    {
        dig=num%10;
        sum=sum+(pow(dig,3));
        num=num/10;
    }
    if (sum==i)
    {
        cout<<i<<" is an armstrong number"<<endl;
    }
    }
}