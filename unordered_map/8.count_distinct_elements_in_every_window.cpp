vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        vector<int> ret;
        
        unordered_map<int,int> mp;
        int i=0;
        int j=k-1;
        for(int m=0;m<k;m++){
            mp[A[m]]++;
        }
        
        while(j<n){
            ret.push_back(mp.size());
            
            j++;
            mp[A[j]]++;
            mp[A[i]]--;
            
           
            
            if(mp[A[i]] == 0){
                mp.erase(A[i]);
                // cout<<"e-"<<mp[A[i]]<<"<<";
            }
            i++;
            
           
        }
        
        return ret;
    }
