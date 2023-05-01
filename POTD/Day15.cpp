class Solution {
public:
    double average(vector<int>& salary) {
        int min=INT_MAX,max=INT_MIN;
        for(int i=0;i<salary.size();i++){
          if(min>salary[i])
          min=salary[i];
          if(max<salary[i])
          max=salary[i];
        }
         double  y=min+max,sum=0;
         cout<<y;
         for(int i=0;i<salary.size();i++){
            sum+=salary[i];
         }
         double c=sum-y;
         int p=salary.size()-2;
       return c/p;
    }
};
