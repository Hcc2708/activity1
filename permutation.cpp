#include<iostream>
#include<vector>
using namespace std;
void permutation(vector<string>&ans, string str, int index){
 if(index == str.size())
 {
    ans.push_back(str);
    return ;
    
 }
 for(int i = index; i<str.size(); i++)
 {
    swap(str[i], str[index]);
    permutation(ans, str, index+1);
    swap(str[i], str[index]);
 }
}
int main(){
    string str = "abc";
    vector<string>ans;
    permutation(ans, str, 0);
    for(string c: ans)
    {
        cout<<c<<" ";
    }

}