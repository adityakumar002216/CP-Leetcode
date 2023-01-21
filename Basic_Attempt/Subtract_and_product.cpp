class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1,x;
        while(n){
             x=n%10;
            sum=sum+x;
             product=product*x;
            n=n/10;
        }
        return product-sum;
    }
};
