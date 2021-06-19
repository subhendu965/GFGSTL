You are given an array A of size N. you need to insert the elements of A into a multiset and display the results. Also, you need to erase a given element x from the multiset and print "erased x" if successfully erased, else print "not found".



multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
   //Insert elements into a multiset
    
    for(int i=0; i<n; i++)
        s.insert(arr[i]);
    return s;
    
}


void multisetDisplay(multiset<int>s)
{
    //Multiset display print elements
    for(int a:s)
        cout<<a<<" ";
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    //If and else condition to erase x from multiset
    
    auto it=s.find(x);
    
    if(it==s.end()){
        cout<<"not found";
    }else{
        s.erase(x);
         cout<<"erased "<<x;
    }
   

    
    
    
    cout<<endl;
}

