//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        
        int  l = arr.size();
        
        int maxi2nd = -1 , maxi = -1;
        
        for( int i = 0 ; i < l; i++){
            
            if( arr[i]>maxi){
                maxi2nd=maxi;
                maxi = arr[i];
            }
            else if( arr[i] >maxi2nd && arr[i]<maxi){
                maxi2nd = arr[i];
            }
        }
        
      
        return maxi2nd;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends