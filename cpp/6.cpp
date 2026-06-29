class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size(), sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxsum=sum;
        for(int i=k;i<arr.size();i++){
            sum=sum+arr[i]-arr[i-k];
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};

class Solution {
public:
    long long time(vector<int>&piles, int a){
        long long t=0;
        for(int i=0;i<piles.size();i++){
            t+= ceil((double)piles[i]/(double)a);
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int r=INT_MIN;
        for(int i=0;i<n;i++){
            if(piles[i]>r) r=piles[i];
        }
        int l=1, ans=r;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long t=time(piles, mid);
            if(t<=h){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};