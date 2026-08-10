class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minlen=INT_MAX;
        int r=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                r++;
            }
            minlen=r;
        }
        for(int i=k;i<blocks.size();i++){
            if(blocks[i-k]=='W'){
                r--;
            }
            if(blocks[i]=='W'){
                r++;
            }
            minlen=min(minlen,r);
        }
        return minlen;
    }
};