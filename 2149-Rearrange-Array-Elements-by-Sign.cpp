class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a,b;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        int k=0,j=0;
        for(int i=0;i<nums.size();i++){
            if((i+1)%2==0){
                 nums[i]=b[k];
                k++;
                
            }
            else{
               nums[i]=a[j];
                j++;
            }
        }
        return nums;
    }
};