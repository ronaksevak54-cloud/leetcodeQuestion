class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>r;
        unordered_map<char,int>w;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                r[s[i]]++;
            }
            if(s[i]=='e'){
                r[s[i]]++;
            }
            if(s[i]=='i'){
                r[s[i]]++;
            }
            if(s[i]=='o'){
                r[s[i]]++;
            }
            if(s[i]=='u'){
                r[s[i]]++;
            }
            if(s[i]=='b'){
                w[s[i]]++;
            }
             if(s[i]=='c'){
                w[s[i]]++;
            }
             if(s[i]=='d'){
                w[s[i]]++;
            }
             if(s[i]=='f'){
                w[s[i]]++;
            }
             if(s[i]=='g'){
                w[s[i]]++;
            }
             if(s[i]=='h'){
                w[s[i]]++;
            }
             if(s[i]=='j'){
                w[s[i]]++;
            }
             if(s[i]=='k'){
                w[s[i]]++;
            }
             if(s[i]=='l'){
                w[s[i]]++;
            }
             if(s[i]=='m'){
                w[s[i]]++;
            }
             if(s[i]=='n'){
                w[s[i]]++;
            }
             if(s[i]=='p'){
                w[s[i]]++;
            }
             if(s[i]=='q'){
                w[s[i]]++;
            }
             if(s[i]=='r'){
                w[s[i]]++;
            }
             if(s[i]=='s'){
                w[s[i]]++;
            }
             if(s[i]=='t'){
                w[s[i]]++;
            }
             if(s[i]=='v'){
                w[s[i]]++;
            }
             if(s[i]=='w'){
                w[s[i]]++;
            }
             if(s[i]=='x'){
                w[s[i]]++;
            }
             if(s[i]=='y'){
                w[s[i]]++;
            }
             if(s[i]=='z'){
                w[s[i]]++;
            }
        }
        int MAX=0;
        for(auto i:r){
            int a=i.second;
            MAX=max(MAX,a);
        }
        int sec=0;
        for(auto i:w){
            int b=i.second;
            sec=max(sec,b);
        }
        int c=MAX+sec;
        return c;
    }
};