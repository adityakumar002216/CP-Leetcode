class Solution {
public:
    int countDigits(int num) {
      int k=num;
      int t=0;
        while(num){
          int x=num%10;
          if(k%x==0)
           t++;
           num=num/10;
        }
        return t;
    }
};
