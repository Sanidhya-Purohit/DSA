class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> final;
        for(int i=0;i<nums.size() ;i++) {
            for(int j=0;j<nums.size();j++){
                for (int k=0;k<nums.size() ;k++) {
                    if (nums[i]+nums[j]+nums[k]==0&&i!=j&&i!=k&&j!=k) {
                   vector <int> result; 
                        int a= min({nums[i], nums[j], nums[k]});
int c=max ({nums[i], nums[j], nums[k]});
int b= nums[i]+ nums[j]+nums[k]-a-c;
                        result.push_back(a);
result.push_back(b);
result.push_back(c);
                    auto test= find(final.begin(), final.end(), result) ;
                     if(test==final.end()) {final.push_back(result);}
                    }
                }
            }
        }
        return final;
    }
};