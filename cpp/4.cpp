class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int day=0, res=0, n=events.size(), i=0;
        priority_queue<int, vector<int>, greater<int>>minheap;
        while(i<n || !minheap.empty()){
            if(minheap.empty()){
                day=events[i][0];
            }
            while(i<n && events[i][0]==day){
                    minheap.push(events[i][1]);
                    i++;
            }
            minheap.pop();
            res++;
            day++;
            while(!minheap.empty() && minheap.top()<day){
                minheap.pop();
            }
        }
        return res;
    }
};

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum1=0, sum2=0;
        int maxsum=nums[0], minsum=nums[0];
        int sum=0;
        for(int i:nums) sum+=i;
        for(int i=0;i<nums.size();i++){
            sum1=max(sum1+nums[i], nums[i]);
            maxsum=max(sum1,maxsum);

            sum2=min(sum2+nums[i], nums[i]);
            minsum=min(sum2, minsum);
        }
        if(maxsum<0) return maxsum;
        return max(maxsum, sum-minsum);
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target) return {i+1, j+1};
            else if(sum>target) j--;
            else i++;
        }
        return {-1,-1};
    }
};


