//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int minLength(string s, int n) {
        string ans="";

        map<string, bool> m;
    
        m.insert(pair<string, bool>("12", true));
        m.insert(pair<string, bool>("21", true));
        m.insert(pair<string, bool>("34", true));
        m.insert(pair<string, bool>("43", true));
        m.insert(pair<string, bool>("56", true));
        m.insert(pair<string, bool>("65", true));
        m.insert(pair<string, bool>("78", true));
        m.insert(pair<string, bool>("87", true));
        m.insert(pair<string, bool>("09", true));
        m.insert(pair<string, bool>("90", true));
        
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if(st.empty()){
                st.push(s[i]);
            }else{
                char ch = st.top();
                string temp="";
                temp.push_back(ch);
                temp.push_back(s[i]);
                if(m[temp]) st.pop();
                else st.push(s[i]);
            }
        }
        
        return st.size();
    }
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
