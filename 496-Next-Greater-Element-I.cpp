class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>a;
        unordered_map<int,int>b;
        for(int i=0;i<nums2.size();i++){
            while(!a.empty() && nums2[i]>a.top()){
                b[a.top()]=nums2[i];
                a.pop();
            }
            a.push(nums2[i]);
        }
        vector<int>r(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            if(b.find(nums1[i])!=b.end()){
                r[i]=b[nums1[i]];
            }
        }
        return r;
    }
};