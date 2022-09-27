//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long> > pq;
        
        for(int i=0; i<n; i++){
            pq.push(arr[i]);
        }
        
        long long sum=0, num1=pq.top(), num2=pq.top();
        pq.pop();
        while(!pq.empty()){
            if(num1<=pq.top()){
                num1 = num1+pq.top();
                pq.pop();
                sum += num1;
            }else{
                pq.push(num1);
                num1 = pq.top();
                pq.pop();
            }
        }
        
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends