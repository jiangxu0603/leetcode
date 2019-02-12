/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (32.84%)
 * Total Accepted:    395.1K
 * Total Submissions: 1.2M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        int res = 0;
        for(int i = 0; i < strs[0].size(); i++)
        {
            auto tmp = strs[0][i];
            for(int j = 1; j < strs.size(); j++)
            {
                if(i > (strs[j].size() - 1) || strs[j][i] != tmp)
                {
                    return strs[0].substr(0, res);
                }
            }
            res++;
        }
        return strs[0].substr(0, res);
    }
};
