class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i=0;i<31;i++)
        if(n==pow(2,i))
        return true;
        return false;
    }
};



//2nd method
// gfg
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        int k=0,i=0;
        // Your code here 
        
        for(i=0;pow(2,i)<=n;i++)
        if(n==pow(2,i))
        k++;
        if(k>0)
        return true;
        else 
        return false;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code En
