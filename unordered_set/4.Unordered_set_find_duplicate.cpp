void DuplicateMe(int arr[], int n) 
{ 

    // Your code here
   // Use 2 sets
   unordered_set<int> s;
   for(int i=0; i<n; i++){
       if(s.find(arr[i])!=s.end()){
           cout<<arr[i]<<" ";
       }
       s.insert(arr[i]);
   }

}
