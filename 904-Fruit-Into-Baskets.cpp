class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>a;
        int j=0;
        int i=0;
        int ans=INT_MIN;
        while(j<fruits.size()){
            a[fruits[j]]++;
            while(a.size()>2){
                a[fruits[i]]--;
                if(a[fruits[i]]==0){
                    a.erase(fruits[i]);
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};