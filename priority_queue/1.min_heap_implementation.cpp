void push_pq(priority_queue<int, vector<int>, greater<int>> &pq, int x){
    
    // Your code here
    pq.push(x);
    
}

/* Function to implement pop operation in priority_queue
* pq : priority_queue
*/
void pp_pq(priority_queue<int, vector<int>, greater<int>> &pq){
   
    if(!pq.empty()){
        pq.pop();
        // cout<<pq.size();
    }
    /*Your code here*/
    else
        return;
    
}

/* Function to implement top operation in priority_queue
* pq : priority_queue
*/
int pq_top(priority_queue<int, vector<int>, greater<int>> &pq){
    
    if(!pq.empty())
    /*Your code here*/
       return pq.top();
    else
        return -1;
    
}
