class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>a;

        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }

         for(int i=0;i<nums.size();i++){
           if(i<a[0]){
            nums[i] =0;
           }
           else if(i < a[1]+a[0]){
            nums[i] =1;
           }
           else{
            nums[i] =2;
           }
        }
    }
};