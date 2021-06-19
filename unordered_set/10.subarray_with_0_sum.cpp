bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> s;
        
        int g=0;
        
        for(int i=0; i<n; i++){
                g=g+arr[i];
                if(g==0 || s.find(g)!=s.end()){
                    return true;
                }
               
                s.insert(g);
            }
            
            return false;
            
        }
