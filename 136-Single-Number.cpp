class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> a;
        for( int i:nums){
            a[i]++;
        }
        for(auto b:a){
            if(b.second==1){
                return b.first;
            }
        }

        return -1;
    }
};