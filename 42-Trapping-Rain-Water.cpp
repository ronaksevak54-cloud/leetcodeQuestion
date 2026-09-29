class Solution {
public:
    int trap(vector<int>& height) {
        int lMax=0;
        int rMax=0;
        int totalsum=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            if(height[l]<height[r]){
                if(lMax>height[l]){
                    totalsum=totalsum+lMax-height[l];
                }
                else{
                    lMax=height[l];
                }
                l=l+1;
            }
            else{
                if(rMax>height[r]){
                    totalsum=totalsum+rMax-height[r];
                }
                else{
                    rMax=height[r];
                }
                r=r-1;
            }
        }
        return totalsum;
    }
};