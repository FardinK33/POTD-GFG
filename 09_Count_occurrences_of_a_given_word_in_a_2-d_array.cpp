//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
    void Search(vector<vector<char>> &grid, string s, int row, int col, int &count, int idx, vector<vector<int>> &visited){
    
        if(row<0 || row>= grid.size() || col<0 || visited[row][col]==1 ||  col>=grid[0].size() || s[idx]!=grid[row][col]) return;
        
        if(idx==s.size()-1 && grid[row][col]==s[idx]){
            count++;
            return;
        }
        
        visited[row][col] = 1;
    
        Search(grid,  s, row+1, col, count, idx+1, visited);
        Search(grid,  s, row-1, col, count, idx+1, visited);
        Search(grid,  s, row, col+1, count, idx+1, visited);
        Search(grid,  s, row, col-1, count, idx+1, visited);
    
        visited[row][col] = 0;
    
    }
    
    public:
    int findOccurrence(vector<vector<char> > &mat, string target){
        int ans=0;
        vector<vector<int>> visited(mat.size(), vector<int>(mat[0].size(), 0));
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==target[0]){
                    Search(mat, target, i, j, ans, 0, visited);
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        Solution obj;
        cout<<obj.findOccurrence(mat,target)<<endl;
    }
}

// } Driver Code Ends
