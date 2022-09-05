//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
        bool isValid(vector<int> &A, int n, int N, int mid){
            int count=0;
            int time=0;
            for (int i = 0; i < n; i++)
            {
                time = A[i];
                int j=2;
                while(time<=mid){
                    count++;
                    time = time + (A[i] * j);
                    j++;
                }
                if(count>=N) return true;
            }
            return false;
        }
        
    public:
    int findMinTime(int N, vector<int>&A, int L){
        
        sort(A.begin(), A.end());
        
        int s = A[0], e, mid, ans;
        int last = A[L-1];
        
        if(N%2==0){
            e = N/2;
            e = e*(last + (last*N) );
        }else{
            e =(last + (last*N) )/ 2;
            e = e*(N);
        }
        
        if(L==1){
            return e;
        }
        while(s<=e){
            mid = s+(e-s)/2;
            if(isValid(A, L, N, mid)){
                ans = mid;
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
    
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
	    int n;
	    cin >> n;
	    int l;
	    cin >> l;
	    vector<int>arr(l);
	    for(int i = 0; i < l; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    int ans = ob.findMinTime(n, arr, l);
	    cout << ans <<endl;
	}
	return 0;
}

// } Driver Code Ends
