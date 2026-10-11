class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>r;
        int Max=INT_MIN;
        for(int i=0;i<heights.size();i++){
            while(!r.empty() && heights[i]<heights[r.top()]){
                int pse;
                int element=r.top();
                r.pop();
                if(r.empty()){
                    pse=-1;
                }
                else{
                    pse=r.top();
                }
                Max=max(Max,heights[element]*(i-pse-1));
            }
            r.push(i);
        }
        while(!r.empty()){
            int nse=heights.size();
            int element2=r.top();
            r.pop();
            int pse;
             if(r.empty()){
                    pse=-1;
                }
                else{
                    pse=r.top();
            }
            Max=max(Max,heights[element2]*(nse-pse-1));
        }
        return Max;

    }
};