vector<string> winner(string names[],int n)
    {
       
        unordered_map<string,int> fc;
        for(int i=0;i<n;i++){
            fc[names[i]]++;
        }
        
        int max=0;
        string name="";
      for(auto it=fc.begin(); it!=fc.end(); it++){
          if(it->second > max){
              max=it->second;
              name=it->first;
          }else if(it->second == max){
              name=(name<(it->first))?name:(it->first);
          }
      }
      
      vector<string> ret;
      ret.push_back(name);
      ret.push_back(to_string(max));
      return ret;
        
    }
