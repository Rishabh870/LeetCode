class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> a;
        for (int i =0;i<nums.size();i++){
            a.insert(nums[i]);
        }

        nums = vector<int>(a.begin(),a.end());
        return nums.size();
    }
};