class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>r;
        int j=0;
        int i=0;
        int ans=INT_MIN;
        while(j<nums.size()){
            r[nums[j]]++;
            while(r[nums[j]]>k){
                r[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};