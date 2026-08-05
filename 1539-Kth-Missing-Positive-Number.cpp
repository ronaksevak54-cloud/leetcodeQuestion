class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>r;
        unordered_map<int,int>s;
        vector<int>z;
        for(int i=1;i<=10000;i++){
            r[i]++;
        }
        for(int i=0;i<arr.size();i++){
            s[arr[i]]++;
        }
        int c;
        for(auto i:r){
            int a=i.first;
            int b=i.second;
            int c=s[a];
            if(c==0){
                z.push_back(a);
            }
        }
        sort(z.begin(),z.end());
        int w=z[k-1];
        return w;
    }
};