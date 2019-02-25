/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 *
 * https://leetcode.com/problems/3sum/description/
 *
 * algorithms
 * Medium (23.08%)
 * Total Accepted:    464.9K
 * Total Submissions: 2M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such
 * that a + b + c = 0? Find all unique triplets in the array which gives the
 * sum of zero.
 * 
 * Note:
 * 
 * The solution set must not contain duplicate triplets.
 * 
 * Example:
 * 
 * 
 * Given array nums = [-1, 0, 1, 2, -1, -4],
 * 
 * A solution set is:
 * [
 * ⁠ [-1, 0, 1],
 * ⁠ [-1, -1, 2]
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto len = nums.size();
        vector<vector<int>> res;

        for(int i = 0; i < len; i++)
        {
            int target = -nums[i];
            int front = i + 1;
            int back = len - 1;

            while(front < back)
            {
                int sum = nums[front] + nums[back];

                if(sum < target)
                    front++;
                else if(sum > target)
                    back--;
                else{
                    vector<int> tmp(3, 0);
                    tmp[0] = nums[i];
                    tmp[1] = nums[front];
                    tmp[2] = nums[back];

                    res.push_back(tmp);

                    while(front < back && nums[front] == tmp[1])
                        front++;
                    while(front < back && nums[front] == tmp[2])
                        back--;
                }
            }
            while(i < len - 1 && nums[i+1] == nums[i])
                i++;
        }
        return res;
    }
};
