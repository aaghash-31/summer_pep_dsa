#include<iostream>
using namespace std;
string rev(string str){
    int i=0, j=str.length()-1;
    while(i<j){
        char c=str[i];
        str[i]=str[j];
        str[j]=c;
        i++;
        j--;
    }
    return str;
}
int main(){
    string str="Hello";
    string res=rev(str);
    cout<<res;
}

class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_map<char,int> mp;
        string res="";
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                res+=s[i];
                mp[s[i]]=1;
            }
        }
        return res;
    }
};