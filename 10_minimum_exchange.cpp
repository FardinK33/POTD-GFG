//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
int MinimumExchange(vector<vector<char>>matrix){
    int ans1, ans2, n, m;
    
    ans1 = ans2 = 0;
    n = matrix.size();
    m = matrix[0].size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if( matrix[i][j] == 'A'){
                
                if((i+j)%2==1){
                    ans1++;
                }else{
                    ans2++;
                }
                
            }
            else{
                
                if((i+j)%2==1){
                    ans2++;
                }else{
                    ans1++;
                }
                
            }
        }
    }
    
    if(ans1%2==0){
        ans1 /=2;
    }
    if(ans2%2==0){
        ans2 /= 2;
    }
    
    return min(ans1, ans2);
}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>matrix(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MinimumExchange(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
