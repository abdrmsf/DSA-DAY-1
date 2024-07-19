# include<iostream>
using namespace std;
int main()
{
    int i,fact=1,num;
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}