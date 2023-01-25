#include<iostream>
using namespace std;
struct car{
    int x;
    string s;
    int *ptr;
};
int main()
{
    string myArr[] = {"Hello", "World", "Hey", "hi"};
    int marks[]  ={22, 12, 14, 20, 15};
    //int arr2[]; not allowed
    //int [] arr1; not allowed
    // char [] arr = {'c','c'}; not allowed
    cout<< myArr[0];
    cout<<endl<<sizeof(myArr)/sizeof(string);

    int a2[][4] = {{1,2,3,4},{1,2,3,4}, {234,34,3,3},{1,2,3,4}};
    //a2[][4]; this also not allowed if you don't assign values;
    // a2[][] not allowed even if you assign the values;
    // a2[3][] not allowed even if you assign the values
    int a3[3][4];
    cout<<a2[0];// will print address of array first in multidimensional array

    car c1;
    car *c2;
    c1.x = 43;
    c1.s = "raj"; // note 'raj' is not allowed as string in c++
    c1.ptr = &c1.x;
    cout<<endl<<c1.ptr<<endl;
    c2->
    cout<<c2->x;
    // reference var
    int myInt = 5;
    int &ref1 = myInt;
    ref1 = 4;
    cout<< myInt << endl;
    cout<< ref1<<endl;
    cout<<&ref1<<endl;
}
