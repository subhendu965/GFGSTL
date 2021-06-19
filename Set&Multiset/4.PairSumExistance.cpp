int sumExists(int arr[], int n, int sum){
    
    set<int> s;
    //code here
    for(int i=0;i<n;i++){
        auto it=s.find(sum-arr[i]);
        if(it!=s.end())
            return 1; 
            
        s.insert(arr[i]);
    }
    
    return 0;
    
}
