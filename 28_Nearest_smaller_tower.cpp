class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n = arr.size();
        stack<int>s;
        s.push(-1);
        
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            if(s.top()==-1){
                ans.push_back(-1);
                s.push(i);
                
            }else{
                while(s.top()!=-1 && arr[i]<=arr[s.top()]){
                    s.pop();
                }
                
                ans.push_back(s.top());
                s.push(i);
            }
            
        }
        
        while(s.top()!=-1) s.pop();
        
        for(int i=n-1; i>=0; i--){
            if(s.top()==-1){
                s.push(i);
                
            }else{
                while(s.top()!=-1 && arr[i]<=arr[s.top()]){
                    s.pop();
                }
                
                if(ans[i]==-1) ans[i] = s.top();
                else if( s.top() != -1 && i-ans[i] > s.top() - i || s.top()!=-1 && i-ans[i] == s.top() - i && arr[ans[i]] > arr[s.top()]) ans[i] = s.top();
    
                s.push(i);
            }
        }
        
        return ans;
    }
};
