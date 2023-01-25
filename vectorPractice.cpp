#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>abc = {1,3,4,5};
    vector<int>abcd = abc;
    for(auto i = abcd.begin(); i< abcd.end(); i++)
    cout<<*i<<" ";
}
