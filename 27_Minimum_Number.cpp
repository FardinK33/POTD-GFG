class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        
        int min=INT_MAX;
         
        for(int i=0; i<n; i++){
            if( arr[i] & 1 ){
                return 1;
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
        
        return min;
    }
};
