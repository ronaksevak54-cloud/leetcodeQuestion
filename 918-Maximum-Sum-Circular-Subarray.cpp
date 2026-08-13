class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=0;
        for(int i:nums){
            totalsum=totalsum+i;
        }
        int sum2=0;
        int minsum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum2=sum2+nums[i];
            minsum=min(minsum,sum2);
            if(sum2>0){
                sum2=0;
            }
        }
        int sum1=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum1=sum1+nums[i];
            maxsum=max(maxsum,sum1);
            if(sum1<0){
                sum1=0;
            }
        }
        int circularsum=max(maxsum,totalsum-minsum);
        if(maxsum<0){
            return maxsum;
        }
        return circularsum;
    }
};