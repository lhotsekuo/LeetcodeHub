class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        for (; i < nums.size(); ++i) {
            if ( val != nums[i] )
                nums[j++] = nums[i];
        }
        return j;
    }
};