class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int r=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        if(double(sum/k)>=threshold){
                r++;
            }
        for(int i=k;i<arr.size();i++){
            sum=sum+arr[i]-arr[i-k];
            if(double(sum/k)>=threshold){
                r++;
            }
        }
        return r;
    }
};