#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int mul(int a, int b){
    return a*b;
}
float mul(double x, int y){
    return x*y;
}
int main(){
    int a = mul(2,3);
    cout<<"int type output is :"<<a <<endl;
    float b = mul(2.1, 4);
    cout<<"double type output is " <<b<<endl;
}
