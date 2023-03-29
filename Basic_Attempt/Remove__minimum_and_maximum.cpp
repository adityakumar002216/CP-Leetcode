class Solution {
public:
    int minimumDeletions(vector<int>& v) {
        if(v.size()==1)
            return 1;
 
        vector<int> temp;
        int n=v.size();
        int ans=0;
        int mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<v.size();++i){
            mx=max(mx,v[i]);
            mn=min(mn,v[i]);
        }
 
        int d1=0,d2=0;
        int index1=-1,index2=-1;
        for(int i=0;i<v.size();++i){
            if(v[i]==mx){
                index1=i;
            }
 
            else if(v[i]==mn){
                index2=i;
            }
        }
 
        d1=min(index1+1,n-index1);
        d2=min(index2+1,n-index2);
 
        if(d1<d2){
            if(index1+1<n-index1){
                for(int i=index1+1;i<n;++i){
                    temp.push_back(v[i]);
                }
 
                ans+=d1;
                int index=-1;
                for(int i=0;i<temp.size();++i){
                    if(temp[i]==mn){
                        index=i;
                        break;
                    }
                }
 
                ans+=min(index+1,(int)temp.size()-index);
            }
 
            else{
                for(int i=index1-1;i>=0;--i){
                    temp.push_back(v[i]);
                }
 
                ans+=d1;
                int index=-1;
                for(int i=0;i<temp.size();++i){
                    if(temp[i]==mn){
                        index=i;
                        break;
                    }
                }
 
                ans+=min(index+1,(int)temp.size()-index);
            }
        }
 
        else{
            if(index2+1<n-index2){
                for(int i=index2+1;i<n;++i){
                    temp.push_back(v[i]);
                }
 
                ans+=d2;
                int index=-1;
                for(int i=0;i<temp.size();++i){
                    if(temp[i]==mx){
                        index=i;
                        break;
                    }
                }
 
                ans+=min(index+1,(int)temp.size()-index);
            }
 
            else{
                for(int i=index2-1;i>=0;--i){
                    temp.push_back(v[i]);
                }
 
                ans+=d2;
                int index=-1;
                for(int i=0;i<temp.size();++i){
                    if(temp[i]==mx){
                        index=i;
                        break;
                    }
                }
 
                ans+=min(index+1,(int)temp.size()-index);
            }
        }
 
        return ans;
    }
};
