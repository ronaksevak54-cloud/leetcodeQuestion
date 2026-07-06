class Solution {
public:
int longest(vector<int>& nums,int i,int prev,vector<vector<int>>&dp){
    if(i==nums.size()){
        return 0;
    }
    if(dp[i][prev+1]!=-1){
        return dp[i][prev+1];
    }
    if(prev==-1 || nums[prev]<nums[i]){
        int r1=1+longest(nums,i+1,i,dp);
        int r2=longest(nums,i+1,prev,dp);
        return dp[i][prev+1]=max(r1,r2);
    }
    return dp[i][prev+1]=longest(nums,i+1,prev,dp);
}
    int lengthOfLIS(vector<int>& nums) {
        int a=nums.size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(a+1,-1);
            dp[i]=t;
        }
        return longest(nums,0,-1,dp);
    }
};