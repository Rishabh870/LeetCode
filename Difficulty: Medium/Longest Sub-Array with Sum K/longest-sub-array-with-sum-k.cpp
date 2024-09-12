//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> a;
        
        int maxi=0,sum=0;
        
        for(int i = 0; i<N;i++){
            sum+=arr[i]; //10
            if(sum == K){
                maxi = max(maxi,i+1);
            }
            
            int rem = sum - K;
            
            if( a.find(rem)!= a.end()){
                int len = i-a[rem];
                maxi =max(maxi,len);
            }
            if(a.find(sum)==a.end()){
                a[sum]=i;
            }
            
        }
        return maxi;
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