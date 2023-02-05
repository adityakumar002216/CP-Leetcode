class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0,x=0;
        while(n){
             x=x*10+n%k;
            n=n/k;
        }
        while(x){
            sum+=x%10;
            x=x/10;
        }
        return sum;
    }
};
