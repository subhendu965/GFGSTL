void Election2019(char party[], int seats[], int n)
{
    //Your code here
    map<char,int> mp;
    set<int> s;
    for(int i=0; i<n; i++){
        mp[party[i]]=seats[i];
        s.insert(seats[i]);
    }
    
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    cout<<*s.rbegin();

    
}
