class Solution {
 public:
  int findMin(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;
    while (start + 1 < end) {
      int mid = start + (end - start) / 2;
      if (nums[mid] < nums[start]) {
        start++;
        end = mid;
      } else if (nums[mid] > nums[end]) {
        start = mid;
      } else {  // nums[start] <= nums[mid] <= nums[end]
        end--;
      }
    }
    return min(nums[start], nums[end]);
  }
};