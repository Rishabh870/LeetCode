class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size() ;

        int a = n * (1+ n)/2 ,b=0;
       
        for (int i =0;i< n ;i++){
            b+=nums[i];
        }
    
        return a-b;
    }
};