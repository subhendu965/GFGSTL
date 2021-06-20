long unique_elements(vector<long>nums)
    {
        // Your code here
        unordered_map<long,int> mp;
        for(long a:nums)
            mp[a]++;
            
        long s=0;
        
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second == 1)
                s+=it->first;
        }
        
        return s;
            
    }
