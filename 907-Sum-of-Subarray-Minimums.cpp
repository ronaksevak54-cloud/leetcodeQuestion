class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>r;
        long long sum=0;
        long long m=1e9+7;
        for(int i=0;i<arr.size();i++){
            while(!r.empty()&&arr[r.top()]>=arr[i]){
                int nse=i;
                int q=r.top();
                r.pop();
                int pse;
                if(r.empty()){
                    pse=-1;
                }
                else{
                    pse=r.top();
                }
                int a=nse-q;
                int b=q-pse;
                sum=(sum+(1LL*arr[q]*a*b)%m)%m;
            }
            r.push(i);
        }
        while(!r.empty()){
            int nse2=arr.size();
            int pse2;
            int q2=r.top();
            r.pop();
            if(r.empty()){
                pse2=-1;
            }
            else{
                pse2=r.top();
            }
            int c=nse2-q2;
            int d=q2-pse2;
            sum=(sum+(1LL*arr[q2]*c*d)%m)%m;
        }
        return sum;
    }
};