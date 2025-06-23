//link- https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1556066567/

class Solution {
public:

  int firstOcc(vector < int > & nums,int n, int key) {
  int start = 0;
  int end = n - 1;
  int first = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (nums[mid] == key) {
      first = mid;
      end = mid - 1;

    } else if (key < nums[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return first;
}


  int lastOcc(vector < int > & nums, int n, int key) {
  int start = 0;
  int end = n - 1;
  int last = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (nums[mid] == key) {
      last = mid;
      start = mid + 1;

    } else if (key < nums[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return last;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOcc(nums,nums.size(),target);
        if(first==-1) return {-1,-1}; 
        int last=lastOcc(nums,nums.size(),target);
        return {first,last};
    }
};
