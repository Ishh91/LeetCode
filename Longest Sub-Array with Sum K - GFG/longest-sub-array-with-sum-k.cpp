//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        int sum = 0, subArr = 0;
    unordered_map<int, int> mp;
         mp[0] = -1;
        for (int i = 0; i < n; ++i) {
            sum+=arr[i];
            int nxt = sum-k;
            if (mp.find(nxt)!=mp.end())
                 subArr = max(subArr, i-mp[nxt]);

             if (mp.find(sum) == mp.end())
                mp[sum] = i;
    }return subArr;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends