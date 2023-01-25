#include<iostream>
using namespace std;

int countDigit(int n)
{
    int count1 = 0;
    int m = n/2;
    if(n== 1)
    {cout<<1;
        return 0;
    }
    if(n==0)
        {cout<<0;
        return 0;}
    for(int i =1; i<=m; i++)
    {
        if(n%i == 0)
        count1++;
    }
    cout<<count1+1;
}
int main()
{
    int n;
    cin>>n;
    countDigit(n);
}
