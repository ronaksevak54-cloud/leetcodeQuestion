class Solution {
public:
int answer(vector<int>& nums,int i,int c,vector<vector<int>>& dp){
    if(i==nums.size()){
        if(c==0){
        return 1;
    }
    return 0;
}
    if(dp[i][c]!=-1){
        return dp[i][c];
    }
    if(nums[i]>c){
        return dp[i][c]=answer(nums,i+1,c,dp);
    }
    int r1=answer(nums,i+1,c-nums[i],dp);
    int r2=answer(nums,i+1,c,dp);
    return dp[i][c]=r1+r2;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if((sum+target)%2!=0 || sum<abs(target)){
            return 0;
        }
        int c=(sum+target)/2;
        vector<vector<int>>dp(nums.size());
        for(int i=0;i<nums.size();i++){
            vector<int>t(c+1,-1);
            dp[i]=t;
        }
        return answer(nums,0,c,dp);
    }
};