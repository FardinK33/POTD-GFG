//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        sort(Arr.begin(), Arr.end());
        int i=0, j=N-1, count=1;
        long long sum1 = Arr[i], sum2 = Arr[j];
        i++;
        while(i<j){
            if(sum1+Arr[i] >= sum2){
                j--; count++;
                sum2 += Arr[j];
            }else{
                sum1 += Arr[i];
                i++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
