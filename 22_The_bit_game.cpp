//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int swapBitGame(long long N){
        long long t=N, cnt=0, cn1=0;
        
        while(t>0){
            if(!(t&1)) cnt++;
            else{
                if(cnt>0) cn1++;
            }
            t = t>>1;
        }
        if(cn1&1 || !(N&N-1)) return 2;
        return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.swapBitGame(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
