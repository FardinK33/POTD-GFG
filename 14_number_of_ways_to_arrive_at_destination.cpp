//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int mini=INT_MAX;
    int ans=0;
    void recu(int i,vector<pair<int,int>> adj[], int n,vector<int> &visited,int time){
        visited[i]=1;
        for(int j=0;j<adj[i].size();j++){
            int ch=time+adj[i][j].second;
            if(ch<=mini && visited[adj[i][j].first]==0){
                if(adj[i][j].first==n-1){
                    if(mini>ch){
                        mini=ch;
                        ans=1;
                    }
                    else{
                        ans++;
                    }
                }
                else{
                    recu(adj[i][j].first,adj,n,visited,ch);
                }
            }
        }
        visited[i]=0;
    }
  
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> adj[n];
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        vector<int> visited(n,0);
        int time=0;
        recu(0,adj,n,visited,time);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends
