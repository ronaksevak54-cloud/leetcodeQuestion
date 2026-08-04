class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int a=nums[0];
      int b=nums[nums.size()-1];
      unordered_map<int,int>r;
      unordered_map<int,int>s;
      vector<int>c;
      for(int i=a;i<=b;i++){
        r[i]++;
      }
      for(int i=0;i<nums.size();i++){
        s[nums[i]]++;
      }
      for(auto i:r){
        int z=i.first;
        int y=i.second;
        int w=s[z];
        if(w==0){
            c.push_back(z);
        }
      }
      sort(c.begin(),c.end());
      return c;
    }
};