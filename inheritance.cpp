#include<iostream>
using namespace std;
/// single level inheritance
class Base{
    int a = 3;
    //cout<<a; we can not write printing statement here
    public:
    void walk(){
        cout<<"animal is walking"<<endl;
    }

};
class Derived : public Base{
    public:
    void bark(){
        cout<<"bark"<<endl;
       // cout<<a; only public members of base class is inheritated
    }


};
class BabyDog: public Derived
{
public:
    void sleeps(){
        cout<<"Baby dog is sleeping";
    }
};
int main(){
    Derived d1, d2;
    d1.walk(); /// we can not call this function outside the derived class if we have derived base class privately(default case)
    d1.bark();

}
