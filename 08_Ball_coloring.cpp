//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    unsigned long long int noOfWays(unsigned long long int n){
        unsigned long long int ans;
        if(n==1) return 2;
        ans = 2 + 2*(n-1) + (n-2)*(n-1);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.noOfWays(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
