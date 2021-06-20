 long maximum_sum(int N,vector<int> A,int K)
    {
       // Your code here
       
       unordered_map<int,int> mp;
       for(int i=0; i<N; i++){
           mp[A[i]]++;
       }
       
       priority_queue<pair<int,int>> q;
       for(auto it=mp.begin(); it!=mp.end(); it++){
           q.push({it->second,it->first});
       }
       
       int c=0;
       long sum=0;
       while(c<K){
           pair<int,int> d=q.top();
           q.pop();
           sum=sum+d.second;
           d.first--;
           q.push(d);
           
           c++;
       }
       
       return sum;
    }
