#include<iostream>
using namespace std;
int main()
{
    int x ;
    int y ;
    cin>>x>>y;
    /*int temp;
    temp = x;
    x = y;
    y = temp;*/


    x = x+y;
    y = x-y;
    x = x-y;
     cout<< "x: "<<x << " " << "y: "<<y;

    swap(x,y);
    cout<< "x: "<<x << " " << "y: "<<y << endl;

    int c,b= 0;
    cin>>c;
    int a = c;
    while(a>0)
    {
        b = b + a%10;
        a = a/10;
    }
    cout<<b << endl;

    // reverse a number;

    b = 0;
    while(c >0)
    {
        b = b*10 + c%10;
        c = c/10;
    }
    cout<<b<<endl;

    cout<<" sum of natural number"<<endl;
    int d;
    cin>>d;
    int sum = 0;
    while(d>0)
    {
        sum = sum + d;
        d--;
    }
    cout<<sum;
    cout<<endl<<"power of numbers : ";
    int n, p;
    cin>>n>>p;
    for(int i= 1; i<p; i++)
    {
        n = n*n;
    }
    cout<<n;
}
