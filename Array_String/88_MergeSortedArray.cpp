// Problem 88: Merge Sorted Array
// Difficulty: Easy
// Link: https://leetcode.com/problems/merge-sorted-array/

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int right = nums1.size()-1;
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j])
                nums1[right--] = nums1[i--];
            else
                nums1[right--] = nums2[j--];
        }
    }
};
