# include<iostream>
using namespace std;
int main()
{
    int firstterm=0,secondterm=1,n,nextterm;
    cin>>n;
    cout<<firstterm<<" ";
    cout<<secondterm<<" ";
    for(int i=1;i<=n-2;i++)
    {
        nextterm=firstterm+secondterm;
        cout<<nextterm<<" ";
        firstterm=secondterm;
        secondterm=nextterm;
    }
}