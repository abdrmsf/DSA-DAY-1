# include<iostream>
using namespace std;
int main()
{
    int firstterm=0,secondterm=1,n,nextterm,sum=0;
    cin>>n;
    cout<<firstterm<<" ";
    cout<<secondterm<<" ";
    sum=sum+secondterm;
    for(int i=1;i<=n-2;i++)
    {
        nextterm=firstterm+secondterm;
        cout<<nextterm<<" ";
        if (i%2==0)
        {
            sum=sum+nextterm;
        }
        firstterm=secondterm;
        secondterm=nextterm;
    }
    cout<<sum;
}