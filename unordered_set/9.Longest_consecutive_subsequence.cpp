int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      set<int> s;
      for(int i=0; i<n; i++){
          s.insert(arr[i]);
      }
   
      
      auto it=s.begin();
      int ii=0;
      int nn=1;
      auto np=next(it,1);
      int max=0;
      while(np!=s.end()){
          if((*np-*(prev(np,1)))>1){
              int g=(nn-ii);

              if(g>max)
                max=g;
              it=np;
              ii=nn;
          }
          np++;
          nn++;
      }
      
      int g=(nn-ii);
       if(g>max)
                max=g;
      
      
      
      return max;
    }
