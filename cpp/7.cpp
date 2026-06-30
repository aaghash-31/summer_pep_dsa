#include<iostream>
using namespace std;
void print (int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
bool binarysearch(int arr[], int low, int high, int key){
    if(low>high) return false;
    int mid=(low+high)/2;
    if(arr[mid]==key) return true;
    else if(arr[mid]>key) return binarysearch(arr, low, mid-1, key);
    else return binarysearch(arr, mid+1, high, key);
}
int main(){
    int arr[]={2,16,34,67,89,67,54,3,18};
    bool a=binarysearch(arr,0,8,16);
    cout<<a;
}