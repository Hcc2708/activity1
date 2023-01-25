/// multiple inheritance
/// when derived class has multiple parents
#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void getInt(int n){
        a = n;
    }
};
class B{

    protected:
    int b;
    public:
    void getInt_b(int n)
    {
        b = n;
    }

};
class C:public A, public B
{
    public:
    void display(){
        cout<<"member of A"<<a<<endl;
        cout<<"member of B"<<b<<endl;
    }
};

int main(){}
