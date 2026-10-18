class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int hash[10001]={0};
        int hash2[10001]={0};
        int count=0;
        vector<int> ans;
        for (int j=0;j<nums.size();j++){
        if (nums[j]>0){
            hash[nums[j]]++;
        }
            else {
                hash2[-nums[j]]++;
            }

        }
        for (int j=nums.size();j>0;j--){
        for (int l=0;l<10001;l++){
            if (hash[l]==j){
           ans.push_back(l);
                count++;
            }
            if (hash2[l]==j){
           ans.push_back(-l);
            count++;
            }
            if( count==k) {
        return ans;
            }
        }}
        return {-1};
    }
};