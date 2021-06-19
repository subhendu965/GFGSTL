string Sorted_Characters(string str)
{
    // Your Code Here
    set<char> s;
    for(int i=0;i<str.length(); i++){
        s.insert(str[i]);
    }
    
    string ret="";
    for(char i:s){
        ret=ret+i;
    }
    
    return ret;
}
