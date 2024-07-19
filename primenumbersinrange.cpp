#include <iostream>
using namespace std;
int main()
{
    int lower,upper,count;
    cin>>lower>>upper;
    for(int i=lower;i<=upper;i++)
    {
        count=0;
        for(int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                count=-1;
                break;
            }
        }
        if (count!=0 || i==1)
    {
        cout<<i<<" is not a prime number"<<endl;
    }
        else
    {
        cout<<i<<" is a prime number"<<endl;
    }
    }  

    
}