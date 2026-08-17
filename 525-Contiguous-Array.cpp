class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                s.push_back(1);
            }
            else{
                s.push_back(-1);
            }
        }
        vector<int>Prefix(s.size());
        Prefix[0]=s[0];
        for(int i=1;i<s.size();i++){
            Prefix[i]=Prefix[i-1]+s[i];
        }
        unordered_map<int,int>w;
        int r=0;
        for(int i=0;i<Prefix.size();i++){
            if(Prefix[i]==0){
                r=i+1;
            }
            if(w.find(Prefix[i])!=w.end()){
                r=max(r,i-w[Prefix[i]]);
            }
            else{
                w[Prefix[i]]=i;
            }
        }
        return r;
    }
};