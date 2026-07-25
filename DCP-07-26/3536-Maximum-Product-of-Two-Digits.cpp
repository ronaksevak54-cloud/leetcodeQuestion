class Solution {
public:
    int maxProduct(int n) {
        vector<int>r;
        int a;
        while(n!=0){
            a=n%10;
            n=n/10;
            r.push_back(a);
        }
        int b=1;
        vector<int>c;
        for(int i=0;i<r.size();i++){
            for(int j=0;j<i;j++){
                b=r[i]*r[j];
                c.push_back(b);
            }
        }
        int MAX=0;
        for(int i:c){
            MAX=max(MAX,i);
        }
        return MAX;
    }
};