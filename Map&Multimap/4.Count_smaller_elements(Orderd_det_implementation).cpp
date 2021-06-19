/*
Given an array Arr of size N containing positive integers. Count number of smaller elements on right side of each array.
*/

class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	   // vector<int> ret;
	   // for(int i=0;i<n;i++){
	   //     int s=0;
	   //     for(int j=i+1; j<n;j++){
	   //         if(arr[j]<arr[i])
	   //             s++;
	   //     }
	        
	   //     ret.push_back(s);
	   // }
	    
	   // return ret;
	   
	   
	   vector<int> countSmaller(n, 0);
	    tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
	        ordered_set;
	    for (int i = n - 1; i >= 0; i--) {
	        countSmaller[i] = ordered_set.order_of_key(arr[i]);
	        ordered_set.insert(arr[i]);
	    }
	    return countSmaller;
	}
};
