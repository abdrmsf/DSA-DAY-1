#include <iostream>
using namespace std;
int main()
{
    int num,dig,n;
    string s;
    s="";
    cin>>num;
    n=num;
    while(num!=0)
    {
        dig=num%10;
        s=s+to_string(dig);
        num=num/10;
    }
    if (stoi(s)==n)
    {
        cout<<n<<" is palindrome";
    }
    else
    {
        cout<<n<<" is not palindrome";
    }
}