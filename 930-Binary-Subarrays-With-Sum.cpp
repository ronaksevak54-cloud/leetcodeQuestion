class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                a.push_back(1);
            }
            else{
                a.push_back(0);
            }
        }
        vector<int>Prefix(a.size());
        Prefix[0]=a[0];
        for(int i=1;i<a.size();i++){
            Prefix[i]=Prefix[i-1]+a[i];
        }
        unordered_map<int,int>r;
        r[0]=1;
        int z=0;
        for(int i=0;i<Prefix.size();i++){
            if(r.find(Prefix[i]-goal)!=r.end()){
                z=z+r[Prefix[i]-goal];
            }
            r[Prefix[i]]++;
        }
        return z;
    }
};