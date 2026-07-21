class Solution {
public:
int sub(vector<int>& nums1, vector<int>& nums2,int i,int j,vector<vector<int>>&dp){
    if(i==nums1.size() || j==nums2.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(nums1[i]==nums2[j]){
        return dp[i][j]=1+sub(nums1,nums2,i+1,j+1,dp);
    }
    int r1=sub(nums1,nums2,i+1,j,dp);
    int r2=sub(nums1,nums2,i,j+1,dp);
    return dp[i][j]=max(r1,r2);
}
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(a+b+1,-1);
            dp[i]=t;
        }
        return sub(nums1,nums2,0,0,dp);
    }
};