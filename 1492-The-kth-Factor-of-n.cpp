class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>r;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                r.push_back(i);
            }
        }
        sort(r.begin(),r.end());
        int d=r.size();
        if(k>d){
          return -1;
        }
       int z=r[k-1];
        return z;
    }
};