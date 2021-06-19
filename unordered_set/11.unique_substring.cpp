int unique_substring(string str)
    {
        // Your code here
        unordered_set<string> s;
        for(int i=0; i<str.length(); i++){
            for(int j=1;j<=(str.length()-i);j++){
                string n=str.substr(i,j);
                s.insert(n);
            }
        }
        
        return s.size();
    }
