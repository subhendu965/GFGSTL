long int HashMe (unordered_set<string> myset, string str){

    // Your code here
   // Use hash function
   unordered_set<string>::hasher fn=myset.hash_function();
   return fn(str);

}
