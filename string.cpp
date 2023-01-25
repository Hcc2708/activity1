#include<iostream>
using namespace std;
int main()
{
    string s1 = "hello";
    string s2 = "world";
    string s3 = " " + s1 + s2;
    cout<<s1+ " " + s2;
    cout<<" " + s1 + s2;
    cout<<s3;
    cout<<endl<<s1.append(s2);
    cout<<"\nlength of string s1 : "<< s1.length();
    cout<<endl<<s2[2]<<endl;

    string firstName;
    cin>> firstName;
    string lastName;
    cin>>lastName;
    cout<<firstName+ " " + lastName;
}
