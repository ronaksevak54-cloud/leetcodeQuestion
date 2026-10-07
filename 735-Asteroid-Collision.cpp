class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>a;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0){
                a.push(asteroids[i]);
            }
            else{
                while(!a.empty() && abs(asteroids[i])>a.top() && a.top()>0){
                    a.pop();
                }
                if(!a.empty() && abs(asteroids[i])==a.top()){
                    a.pop();
                }
                else if(a.empty() || a.top()<0){
                    a.push(asteroids[i]);
                }
            }
        }
        vector<int>r;
        while(!a.empty()){
            r.push_back(a.top());
            a.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};
