#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={4,5,6,7,8,9};
    int l=0, r=arr.size()-1;
    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
    for(int i:arr){
        cout<<i<<" ";
    }
}
