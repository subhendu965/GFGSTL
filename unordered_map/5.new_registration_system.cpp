vector<string> login_system(vector<string> v)
{
  // Your code here  
  vector<string> ret;
  unordered_map<string,int> mp;
  for(string a:v){
      auto it=mp.find(a);
      if(it!=mp.end()){
          ret.push_back(a+to_string(it->second));
          it->second++;
      }else{
          ret.push_back(a);
          mp[a]=1;
      }
  }
  return ret;
}
