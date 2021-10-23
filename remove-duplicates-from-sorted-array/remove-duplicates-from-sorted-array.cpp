class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int numsSize = nums.size();
        
        if(0 == numsSize)
        {
            return 0;
        }
        
        int id = 1;
        
        for(int i = 1; i < numsSize; ++i)
        {
            if(nums[i] != nums[id -1])
            {
                nums[id++] = nums[i];
            }
        }
        
        return id;
    }
};