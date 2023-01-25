#include<iostream>
#include<vector>
using namespace std;

int skipx(vector<int>arr, int n, int x)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == x)
        continue;
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr = {1,23,3,5};
    int x = 3;
    int y = sizeof(arr)/sizeof(int);
    skipx(arr, y, x);
}
