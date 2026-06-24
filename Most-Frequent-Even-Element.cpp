1class Solution {
2public:
3    int mostFrequentEven(vector<int>& nums) {
4        unordered_map<int,int>r;
5        vector<int>s;
6        for(int i=0;i<nums.size();i++){
7            if(nums[i]%2==0){
8                s.push_back(nums[i]);
9            }
10        }
11        for(int i=0;i<s.size();i++){
12            r[s[i]]++;
13        }
14        int q=INT_MAX;
15        int MAX=0;
16        for(int i=0;i<s.size();i++){
17           if(r[s[i]]>MAX){
18            MAX=r[s[i]];
19            q=s[i];
20           }
21           else if(r[s[i]]==MAX){
22            q=min(q,s[i]);
23           }
24           
25        }
26        if(s.size()==0){
27            return -1;
28        }
29        return q;
30    }
31};