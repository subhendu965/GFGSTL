 vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int> pq;
        for(int i=0; i<n; i++)
            pq.push(arr[i]);
        vector<int> ret;
        for(int i=0; i<k; i++){
            ret.push_back(pq.top());
            pq.pop();
        }
        
        return ret;
    }
