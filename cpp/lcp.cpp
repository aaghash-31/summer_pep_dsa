class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre=strs[0];
        int len=pre.length();
        for(int i=1;i<strs.size();i++){
            string s=strs[i];
            while(len>s.length() || pre!=s.substr(0, len)){
                len--;
                if(len==0) return "";
                pre=pre.substr(0,len);
            }
        }
        return pre;
    }
};