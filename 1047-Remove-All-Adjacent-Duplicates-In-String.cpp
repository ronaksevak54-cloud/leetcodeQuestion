class Solution {
public:
    string removeDuplicates(string s) {
       stack<pair<char,int>>r;
       string k;
       for(int i=0;i<s.size();i++){
        if(!r.empty()&&r.top().first==s[i]){
            r.top().second++;
        }
        else{
            r.push({s[i],1});
        }
        if(r.top().second>1){
            r.pop();
        }
       }
       while(!r.empty()){
        k.push_back(r.top().first);
        r.pop();
       }
       reverse(k.begin(),k.end());
       return k;
    }
};