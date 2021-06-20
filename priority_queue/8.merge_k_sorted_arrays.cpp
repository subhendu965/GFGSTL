 vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<K;i++){
            // cout<<"Size - "<<arr[i].size();
            for(int j=0; j<K; j++){
                pq.push(arr[i][j]);
                
            }
            
        }
        
        vector<int> ret;
        while(!pq.empty()){
            ret.push_back(pq.top());
            pq.pop();
        }
        
        
        return ret;
    }
