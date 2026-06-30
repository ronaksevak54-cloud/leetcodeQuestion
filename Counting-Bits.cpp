1class Solution {
2public:
3    vector<int> countBits(int n) {
4        vector<int>r;
5        for(int i=0;i<=n;i++){
6            string a;
7            int b=i;
8            while(b!=0){
9                if(b%2==0){
10                    a.push_back('0');
11                }
12                else{
13                    a.push_back('1');
14                }
15                b=b/2;
16            }
17            reverse(a.begin(),a.end());
18            int c=0;
19            for(int i=0;i<a.size();i++){
20                if(a[i]=='1'){
21                    c++;
22                }
23            }
24            r.push_back(c);
25        }
26        return r;
27    }
28};