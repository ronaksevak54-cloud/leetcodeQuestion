class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int>r;
        r['a']=26;
        r['b']=25;
        r['c']=24;
        r['d']=23;
        r['e']=22;
        r['f']=21;
        r['g']=20;
        r['h']=19;
        r['i']=18;
        r['j']=17;
        r['k']=16;
        r['l']=15;
        r['m']=14;
        r['n']=13;
        r['o']=12;
        r['p']=11;
        r['q']=10;
        r['r']=9;
        r['s']=8;
        r['t']=7;
        r['u']=6;
        r['v']=5;
        r['w']=4;
        r['x']=3;
        r['y']=2;
        r['z']=1;
        int w=0;
        for(int i=0;i<s.size();i++){
            int z=r[s[i]]*(i+1);
            w=w+z;
        }
        return w;
    }
};