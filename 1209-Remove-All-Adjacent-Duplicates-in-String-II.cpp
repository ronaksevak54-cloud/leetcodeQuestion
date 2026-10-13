class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>r;
        string z;
        for(int i=0;i<s.size();i++){
            if(!r.empty() && r.top().first==s[i]){
                r.top().second++;
            }
            else{
                r.push({s[i],1});
            }
            if(r.top().second==k){
                r.pop();
            }
        }
        while(!r.empty()){
            while(r.top().second--){
                z.push_back(r.top().first);
            }
            r.pop();
        }
        reverse(z.begin(),z.end());
        return z;
    }
};