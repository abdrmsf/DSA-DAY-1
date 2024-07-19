#include <iostream>
using namespace std;
int main()
{
    int flag1=0,flag2=1,count,lower,upper,skip;
    cin>>lower>>upper;
    cin>>skip;
    for(int i=lower;i<=upper;i++)
    {
        count=0;
        for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
               count=-1; 
               break;
            }
        }
        if (count!=0)
        {
            continue;
        }
        else if (count==0)
        {
            flag1++;
            if (flag1==1 or flag1==flag2+skip+1)
            {
                cout<<i<<" is a prime number"<<endl;
                flag2=flag1;
            }
        }
    }
}