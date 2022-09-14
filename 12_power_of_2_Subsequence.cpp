//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{
public:
    long long numberOfSubsequences(int N, long long A[]){
        int count=0; 
        long long mod = 1000000007;
        long long ans = 1;
        for(int i=0; i<N; i++){
            int temp = A[i];
            
            if(!(temp&(temp-1))){
                count++;
            }
        }
        
        while(count>0){
            ans = (ans*2) % mod;
            count--;
        }
        ans--;
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        long long A[N];
        for(int i=0;i<N;++i){
            cin >> A[i];
        }
        Solution ob;
        cout << ob.numberOfSubsequences(N,A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
