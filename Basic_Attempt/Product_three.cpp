class Solution {
public:
    bool isPowerOfThree(int n) {
        int x=0;
        for(int i=0;pow(3,i)<=n;i++){
            if(n==pow(3,i))
            x=1;
            
        }
        if(x==1)
        return true;
        else
            return false;
    }
};
