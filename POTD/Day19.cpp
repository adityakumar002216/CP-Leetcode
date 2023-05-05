class Solution {
public:
bool check(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return 1;
    return 0;
}
    int maxVowels(string s, int k) {
        int count=0,m=0,i=0,j=k-1;
        for(int l=i;l<=j;l++)
        {
            if(check(s[l]))
            count++;
        }
        m=max(count,m);
      while(j<s.size())
      {
          i++;
          j++;
            if(check(s[i-1])&& !check(s[j]))
            count--;
            else if(!check(s[i-1]) && check(s[j]))
            count++;
             m=max(count,m);
      }
      return m;
    }
};
