#include<iostream>
using namespace std;
int findInd(int arr[], int n, int arrSize)
{
    for(int i = arrSize-1; i>=0; i--)
    {
        if(arr[i] == n)
            return i;
    }
    return -1;
}
int findSum(int arr[], int n, int arrSize)
{
    int sum = 0;
    for(int i = 0; i<arrSize; i++)
    {
        if(arr[i] == n)
            continue;
        sum = sum + arr[i];
    }
    return sum;
}
int main(){

int a;
cin>>a;
for(int i = 0; i<a; i++)
{
    for(int j = 0; j<=i; j++)
    cout<<"*";
    cout<<endl;
}
int arr[] = {1,2,3,4,3,4,5};
int n = 3;
int arrSize = sizeof(arr)/sizeof(int);
int x = findInd(arr, n, arrSize);
cout<<"the index of element is "<<x;

int sum = findSum(arr, n, arrSize);
cout<<"\nsum of the array elements : "<<sum;
}
