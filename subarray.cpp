#include<iostream>>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int>&nums, vector<pair<int, int>>output, vector<vector<pair<int, int>>>&ways, int index, int maxi, int mini)
    {
        if(index == nums.size())
        {
            if(0 <= abs(maxi-mini) && abs(maxi-mini) <= 2 && output.size() != 0) ways.push_back(output);
            
            return ;
        }
        if(output.size() != 0)
        {
            if(0 <= abs(maxi-mini) && abs(maxi-mini) <= 2 && output.size() != 0) ways.push_back(output);
        }
        else
        solve(nums, output, ways, index+1, maxi, mini);
        if(output.size() !=0)
        {
            if(output[output.size()-1].first + 1 == index)
            {
                output.push_back({index, nums[index]});
                if(mini > nums[index]) mini = nums[index];
                if(maxi < nums[index]) maxi = nums[index];
                solve(nums, output, ways, index+1, maxi, mini);
            }
            else return;
        }
        else
        {   
            mini = nums[index];
            maxi = nums[index];
            output.push_back({index, nums[index]});
            solve(nums, output, ways, index+1, maxi, mini);}
        
    }
    long long continuousSubarrays(vector<int>& nums) {
        vector<pair<int, int>>output;
        vector<vector<pair<int, int>>>ways;
        solve(nums, output, ways, 0, 0, INT_MAX);
        
        return ways.size();
    }
};