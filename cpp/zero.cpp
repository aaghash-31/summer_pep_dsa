#include<iostream>
using namespace std;
int main(){
    int arr[]={8,0,2,1,0,0,0,8,0,4};
    int a=0;
    for(int i=0;i<10;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[a]);
            a++;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}