class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size();++i) {
            for(int j = i + 1;j < nums.size();++j) {
                int sum = nums[i] + nums[j];
                while(target == sum) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};