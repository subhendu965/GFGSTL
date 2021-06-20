int max_toys(int arr[], int n, int k)
    {
        //Your code here
        
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n; i++){
            pq.push(arr[i]);
        }
        
        int count=0;
        while(!pq.empty() && k>0){
            int g=pq.top();
            pq.pop();
            if(g<=k){
                count++;
                k=k-g;
            }
        }
        
        return count;
    }
