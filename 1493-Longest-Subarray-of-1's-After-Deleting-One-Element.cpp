class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int Max=INT_MIN;
        int i=0;
        int j=0;
        int zerocount=0;
        while(j<nums.size()){
            if(nums[j]==0){
                zerocount++;
            }
            while(zerocount>1){
                if(nums[i]==0){
                    zerocount--;
                }
                i++;
            }
            Max=max(Max,j-i+1);
            j++;
        }
        return Max-1;
    }
};