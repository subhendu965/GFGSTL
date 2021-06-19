class Solution{
    public:
    //Complete this function
    void freqSorted(int arr[], int n)
    {
       //Your code here
       map<int,int> mp;
       for(int i=0;i<n;i++){
           if(mp.find(arr[i])!=mp.end()){
               mp[arr[i]]++;
           }else{
               mp[arr[i]]=1;
           }
       }
       
       for(auto it=mp.begin(); it!=mp.end(); it++){
           cout<<"("<<it->first<<","<<it->second<<") ";
       }
    }
};

