//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string S, int K){
    	string ans;
    	int count=K;
    	
        for(int i=S.size()-1; i>=0; i--){
            
            char ch = S[i];
            
            if(S[i] != '-'){
                
                if(ch>='a' && ch<='z') ch -= 32;
                
                ans.push_back(ch);
                count--;  
            }
            
            if(count==0){
                count = K;
                ans.push_back('-');
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        if(ans[0]=='-' && ans.size()!=1){
            return ans.substr(1);
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
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends
