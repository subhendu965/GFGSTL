/*
You are given an array A of size N. you need to insert the elements of A into a set and display the results. Also, you need to erase a given element x from the set and print "erased x" if successfully erased, else print "not found".
*/

set<int> setInsert(int arr[],int n)
{
    set<int>s;
    
    //Your code here to insert arr into s
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    
    return s;
    
}


void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}


void setErase(set<int>&s,int x)
{
    auto it=s.find(x);
   //write if condition here
   if(it==s.end()){
       cout<<"not found";
   }else{
       s.erase(it);
       cout<<"erased "<<x;
       
   }
    
    
    //write else condition here
    
    
    
    cout<<endl;
}
