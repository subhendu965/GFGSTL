struct myComp{
    bool operator()(pair<int,int>  const &p1, pair<int,int>  const &p2){
        if(p1.second == p2.second){
            return p1.first>p2.first;
        }else{
            return p1.second<p2.second;
        }
        
        //return p1.first>p2.first;
    }
};
class Solution{
    public:
    
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComp> q;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            q.push(*it);
        }
        
         vector<int> ret;
        while(!q.empty()){
            pair<int,int> it=q.top();
            q.pop();
            for(int i=0; i<it.second; i++)
                ret.push_back(it.first);
        }
        
       
        return ret;
        
    }
};
