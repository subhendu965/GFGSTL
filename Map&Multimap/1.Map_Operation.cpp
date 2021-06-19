map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
   //Insert arr[i] as key and i as value
    for(int i=0;i<n;i++){
        mp[arr[i]]=i;
    }
    
    return mp;
    
}


void mapDisplay(map<int,int>mp)
{
    //Print every key and value pair in a new line
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<(*it).second<<endl;
    }
 
}


void mapErase(map<int,int>&mp,int x)
{
   //Write the if and else condition to erase x from map
   auto it=mp.find(x);
   
   if(it==mp.end()){
        cout<<"not found";
   }else{
       mp.erase(x);
       cout<<"erased "<<x;
   }
    
    
    //else condition
   
    
    
    cout<<endl;
}

