#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vector1 = {3,7,1,9,4,6,2,8,5};
    int min = vector1[0];
    int max = vector1[0];
    int sum = 0;
    for(int i = 0; i<vector1.size(); i++)
    {
        if(vector1[i]< min)
        {
            min = vector1[i];
        }
        if(vector1[i]>max) max = vector1[i];

        sum += vector1[i];
    }
    cout<<"max  : "<< max<< " min : "<< min<<" avg : "<< sum/vector1.size();

}
