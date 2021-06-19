void SwapMe(unordered_set<string> first, unordered_set<string> second){

    // Your code here
   // Use swap function
    first.swap(second);
    
  // For printing the set
  for (const string &x: first) cout << x << " ";
  cout << endl;
  for (const string &x: second) cout << x << " ";
  cout << endl;

}
