/*
------------------------------------------------------------
Problem: Two Sum
Platform: LeetCode
Problem No.: 1
Difficulty: Easy

Approach:
- Check every pair of elements using two nested loops.
- If the sum of two elements equals the target,
  return their indices.

Time Complexity: O(n²)
Space Complexity: O(1)

Author: Nikita Zambre
Date: July 2026
------------------------------------------------------------
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
