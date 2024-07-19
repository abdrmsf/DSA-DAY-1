#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int num,s,dig,count=0;
    cin>>num;
    s=num;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    while(s!=0)
    {
        dig=s/(int)pow(10, count - 1);
        cout<<dig<<endl;
        s=s%(int)pow(10, count - 1);
        count--;
    }
}
