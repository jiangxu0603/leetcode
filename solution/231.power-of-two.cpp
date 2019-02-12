/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 *
 * https://leetcode.com/problems/power-of-two/description/
 *
 * algorithms
 * Easy (41.54%)
 * Total Accepted:    209.6K
 * Total Submissions: 504.3K
 * Testcase Example:  '1'
 *
 * Given an integer, write a function to determine if it is a power of two.
 * 
 * Example 1:
 * 
 * 
 * Input: 1
 * Output: true 
 * Explanation: 20 = 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 16
 * Output: true
 * Explanation: 24 = 16
 * 
 * Example 3:
 * 
 * 
 * Input: 218
 * Output: false
 * 
 */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // 
        // Power of two means only one bit of n is '1'
        // so use this trick.
        //
        if(n <= 0)
            return false;
        return !(n & (n - 1));
    }
};
