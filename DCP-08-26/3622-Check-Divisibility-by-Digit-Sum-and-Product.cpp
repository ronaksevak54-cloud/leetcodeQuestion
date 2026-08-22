class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int Product=1;
        int a;
        int c=n;
        while(n!=0){
            a=n%10;
            sum=sum+a;
            Product=Product*a;
            n=n/10;
        }
        int r=sum+Product;
        if(c%r==0){
            return true;
        }
        return false;
    }
};
