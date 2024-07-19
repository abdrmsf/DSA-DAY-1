#include <iostream>
using namespace std;
int main()
{
    int num,count=0;
    cin>>num;
    for(int i=2;i<num;i++)
    {
       if(num%i==0) 
       {
           count=-1;
           break;
       }
    }
if (count!=0)
{
    cout<<num<<" is not a prime number"<<endl;
}
else
{
    cout<<num<<" is a prime number"<<endl;
}
    
}