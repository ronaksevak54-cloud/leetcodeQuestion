class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int i=0;
        int j=0;
        long long Product=1;
        while(j<nums.size()){
            Product=Product*nums[j];
            if(k<=1){
                return 0;
            }
            while(Product>=k){
                Product=Product/nums[i];
                i++;
            }
            ans=ans+j-i+1;
            j++;
        }
        return ans;
    }
};