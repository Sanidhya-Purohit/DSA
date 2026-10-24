class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<long long, long long> mpp;
        for (int i=0; i<nums.size() ;i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]]>=nums.size()/2.0){
                return nums[i];
            }
        }
        return -1;
    }
};