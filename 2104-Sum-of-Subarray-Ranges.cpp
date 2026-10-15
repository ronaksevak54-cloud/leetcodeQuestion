class Solution {
public:
long long subarrayLargest(vector<int>a){
    stack<long long>c;
    long long sum1=0;
    for(int i=0;i<a.size();i++){
        while(!c.empty() && a[c.top()]<=a[i]){
            int nge=i;
            int q=c.top();
            c.pop();
            int pge;
            if(c.empty()){
                pge=-1;
            }
            else{
                pge=c.top();
            }
            int d=nge-q;
            int e=q-pge;
            sum1=sum1+(a[q]*1LL*d*e);
        }
        c.push(i);
    }
    while(!c.empty()){
        int nge2=a.size();
        int q2=c.top();
        c.pop();
        int pge2;
        if(c.empty()){
            pge2=-1;
        }
        else{
            pge2=c.top();
        }
        int f=nge2-q2;
        int g=q2-pge2;
        sum1=sum1+(a[q2]*1LL*f*g);
    }
    return sum1;
}
long long subarrayMinimum(vector<int>s){
    stack<long long>t;
    long long sum2=0;
    for(int i=0;i<s.size();i++){
        while(!t.empty()&&s[t.top()]>=s[i]){
            int nse=i;
            int u=t.top();
            t.pop();
            int pse;
            if(t.empty()){
                pse=-1;
            }
            else{
                pse=t.top();
            }
            int v=nse-u;
            int w=u-pse;
            sum2=sum2+(s[u]*1LL*v*w);
        }
        t.push(i);
    }
    while(!t.empty()){
        int nse2=s.size();
        int u2=t.top();
        t.pop();
        int pse2;
        if(t.empty()){
            pse2=-1;
        }
        else{
            pse2=t.top();
        }
        int z=nse2-u2;
        int k=u2-pse2;
        sum2=sum2+(s[u2]*1LL*z*k);
    }
    return sum2;
}
    long long subArrayRanges(vector<int>& nums) {
        long long m=1e9+7;
        long long r=(subarrayLargest(nums)-subarrayMinimum(nums));
        return r;
    }
};


