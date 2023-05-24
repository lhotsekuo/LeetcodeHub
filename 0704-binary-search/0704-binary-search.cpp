class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        while ( left < right ) {
            int mid = ( right + left ) >> 1;
            if ( nums[mid] == target )
                return mid;
            else if ( nums[mid] < target ) left = mid + 1;
            else right = mid;
        }
        return -1;
    }
};