class Solution {
public:
    int alternateDigitSum(int n) {
      int rev=0,sum=0,r=0;
      while(n){
        rev=rev*10+n%10;
        n=n/10;
      } 
      while(rev){
        int x=rev%10;
        if(r%2==0)
        sum+=x;
        else
        sum-=x;
        r++;
        rev=rev/10;

      }
      return sum;
    }
};
