#include <iostream>
using namespace std;
int main()
{
    int num1,num2,lcm,d,i,j=1;
    cin>>num1>>num2;
    if (num1>num2)
        d=num1;
    else
        d=num2;
    i=d;
    while (1)
    {
        if (i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        j++;
        i=d*j;
    }
    cout<<lcm;
}