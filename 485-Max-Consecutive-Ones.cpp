class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a=0, b=0;
        for(int i=0 ;i<nums.size();i++){
            cout<<a;
            if(nums[i]!=1){
                
                a=0;
                continue;
            }
            a++;
            b=max(a,b);
            
        }
        return b;
    }
};