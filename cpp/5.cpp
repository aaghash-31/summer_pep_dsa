class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int l,r,i;
        int n=arr.size();
        for(i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
              break;
            }
        }
        r=i;
        l=(i+1)%n;
        while(l!=r){
            if(arr[l]+arr[r]==target) return true;
            else if(arr[l]+arr[r]>target) r=(r-1+n)%n;
            else l=(l+1)%n;
        }
        return false;
    }
};

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int floor=-1;
        int n=arr.size();
        int l=0, h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]<=x){
                floor=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return floor;
    }
};


class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int ceil=-1;
        int n=arr.size();
        int l=0, h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]>=x){
                ceil=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ceil;

    }
};