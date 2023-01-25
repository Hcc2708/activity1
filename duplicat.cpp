#include<iostream>
#include<vector>
#include<bits/stdc++.h>
int findDuplicat(vector<int>num)
{
    int count1 = 0;
    for(int i = 0; i<num.size(); i++)
    {
        for(int j = 0; j<num.size(); j++)
        {
            if(i !=j)
            if(num[i] == num[j])
            count1++;
        }
    }
    if(count1>0)
    return 1;
    else
    return 0;
}
int main()
{
    vector<int>num = {1,2,3,5,3,7};
    cout<<findDuplicat(num);
}
