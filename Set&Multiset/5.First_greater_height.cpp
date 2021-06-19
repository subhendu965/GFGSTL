vector<int> greater_height(vector<int>v)
{
    //Your code here
    set<int> s;
    vector<int> ret;
    for(int i:v){
        auto ub=s.upper_bound(i);
        if(ub==s.end())
            ret.push_back(-1);
        else
            ret.push_back(*ub);
        
        
        s.insert(i);
    }
    
    return ret;
}

