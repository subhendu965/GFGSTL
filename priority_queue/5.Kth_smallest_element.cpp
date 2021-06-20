 int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        for(int i=0;i<k-1;i++){
            pq.pop();
        }
        
        return pq.top();
    }
