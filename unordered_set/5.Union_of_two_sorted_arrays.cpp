vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int> s;
        vector<int> ret;
        for(int i=0; i<n; i++)
            s.insert(arr1[i]);
        for(int i=0; i<m; i++)
            s.insert(arr2[i]);
        
        for(int a:s)
            ret.push_back(a);
            
        return ret;
    }
