#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>&num)
{
    int counta =0;
    int doubleTime = 0;
    int j=0;
    sort(num.begin(), num.end());
    for(auto i = num.begin(); i<num.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(int i =1; i<num.size()-1; i++)
    {
        if(num[i-1] == num[i])
        {
            continue;

        }
        else

        {
            if(num[i+1] != num[i])
            j = i;
        }
    }
    cout<<num[j];

}
int main()
{
    vector<int>num = {1,1,2,3,5,3,5,4,5,6,6,4};
    singleNumber(num);
}
