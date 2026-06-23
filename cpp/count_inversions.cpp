class Solution {
  public:
    int merge(vector<int> &arr, int l, int m, int r){
        int n1=m-l+1, n2=r-m;
        int res=0;
        vector<int>le(n1), ri(n2);
        for(int i=0;i<n1;i++) le[i]=arr[l+i];
        for(int j=0;j<n2;j++) ri[j]=arr[m+1+j];
        int i=0, j=0, k=l;
        while(i<n1 && j<n2){
            if(le[i]<=ri[j]){
               arr[k++]=le[i++]; 
            }
            else{
                arr[k++]=ri[j++];
                res+=(n1-i);
            }
        }
        while(i<n1) arr[k++]=le[i++];
        while(j<n2) arr[k++]=ri[j++];
        return res;
    }
    int counter(vector<int> &arr, int l, int r){
        int res=0;
        if(l<r){
            int mid=l+(r-l)/2;
            res+=counter(arr, l, mid);
            res+=counter(arr, mid+1, r);
            res+=merge(arr, l, mid, r);
            
        }
        return res;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        return counter(arr, 0, n-1);
    }
};