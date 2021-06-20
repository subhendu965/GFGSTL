string TieBreak(string names[], int n)
    {
        // your code here
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
      
      return name;
    }
