//reverse number if it is out of 32bit  the output is 0;
class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        while(x){
            rev=rev*10+x%10;
            x=x/10;
        }
        if(-2147483648<=rev && rev<=2147483648)
        return rev;
        return 0;
    }
};
