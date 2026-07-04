class Solution {
public:
bool subset(vector<int>& nums,int i,int sum,vector<vector<int>>& dp){
    if(i==nums.size()){
        return false;
    }
    if(sum==0){
        return true;
    }
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }
    if(nums[i]>sum){
        return dp[i][sum]=subset(nums,i+1,sum,dp);
    }
    bool r1=subset(nums,i+1,sum-nums[i],dp);
    bool r2=subset(nums,i+1,sum,dp);
    return dp[i][sum]=r1||r2;
}
    bool canPartition(vector<int>& nums) {
        int z=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        sum=sum/2;
        vector<vector<int>>dp(z);
        for(int i=0;i<z;i++){
            vector<int>t(sum+1,-1);
            dp[i]=t;
        }
        return subset(nums,0,sum,dp);
    }
};