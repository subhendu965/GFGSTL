class Solution{
    public:
    //Complete this function
    vector<int> uniqueSorted(int arr[], int n)
    {
        //Your code here
        vector<int> ret;
        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(arr[i]);
        }
        
        for(int i:s)
            ret.push_back(i);
            
        return ret;
    }
};
