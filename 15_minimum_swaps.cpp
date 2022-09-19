//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumSwaps(int c[],int v[],int n,int k,int b,int T)
    {
        int count, swp, shipCount=0;
        count = swp = 0;
        
        for(int i=n-1; i>=0; i--){
            long long temp = c[i] + (v[i]*T);
            
            if(temp<b) count++;
            else {
                swp += count;
                shipCount++;
            }
            
            if(shipCount>=k) break;
        }
        
        if(shipCount<k) return -1;
        
        return swp;
    }
};

//{ Driver Code Starts.
int main(){
    int t=1,testcases=1;
    cin>>t;
    while(t>=testcases)
    {
        int n,k,b,T;
        cin>>n>>k>>b>>T;
        int c[n];
        int v[n];
        for(auto &j:c)
            cin>>j;
        for(auto &j:v)
            cin>>j;
        Solution s;
        int ans=s.minimumSwaps(c,v,n,k,b,T);
        cout<<ans<<endl;
        testcases++;
    }
    // TIME;
    return 0;
}
// } Driver Code Ends
