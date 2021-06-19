int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
       
        
        unordered_set<int> s;
        int count=0;
        for(int i=0;i<n; i++){
            s.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            auto it=s.find(b[i]);
            if(it!=s.end()){
                count++;
                s.erase(it);
            }
        }
        
        return count;
    }
