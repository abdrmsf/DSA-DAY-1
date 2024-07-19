#include <iostream>
using namespace std;
int main()
{
    int num1,num2,k,z;
    cin>>num1>>num2;
    if (num1>num2)
        k=num2;
    else
        k=num1;
    for (int i=2;i<=k;i++)
    {   
        if (num1%i==0 && num2%i==0)
        {
            z=i;
        }
    }
    cout<<z;
}
