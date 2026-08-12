class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=nums[0];
        int min1=nums[0];
        int ans=nums[0];
        if(nums.size()==1){
            ans=nums[0];
        }
        for(int i=1;i<nums.size();i++){
            int newmax=max({max1*nums[i],min1*nums[i],nums[i]});
            int newmin=min({max1*nums[i],min1*nums[i],nums[i]});
            max1=newmax;
            min1=newmin;
            ans=max(ans,max1);
        }
        return ans;
    }
};