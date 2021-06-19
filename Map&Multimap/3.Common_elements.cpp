/**

Given two lists V1 and V2 of sizes n and m respectively. Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.


*/

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        multiset<int> ret;
        multiset<int> cp;
        for(int a:v1){
            cp.insert(a);
        }
        
        for(int a:v2){
            auto it=cp.find(a);
            if(it!=cp.end()){
                ret.insert(a);
                cp.erase(it);
            }
        }
        
        vector<int>res;
        for(int a:ret)
            res.push_back(a);
            
        return res;
    }
};

