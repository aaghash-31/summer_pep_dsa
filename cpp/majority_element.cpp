class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=-1, cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cand=nums[i];
                cnt=1;
            }
            else if(cand==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(cand==nums[i]) count++;
        }
        if(count>(nums.size())/2) return cand;
        else return -1;
    }
};