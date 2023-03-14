class Solution {
public:
    bool isSameAfterReversals(int num) {
      int rev=0,rev1=0;
      int x=num;
        while(num){
          rev=rev*10+num%10;
          num=num/10;
        }
        while(rev){
          rev1=rev1*10+rev%10;
          rev=rev/10;
        }
      return x==rev1;
    }
};
