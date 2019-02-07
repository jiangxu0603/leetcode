/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 *
 * https://leetcode.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (37.55%)
 * Total Accepted:    269.3K
 * Total Submissions: 716.4K
 * Testcase Example:  '"11"\n"1"'
 *
 * Given two binary strings, return their sum (also a binary string).
 * 
 * The input strings are both non-empty and contains only characters 1 or 0.
 * 
 * Example 1:
 * 
 * 
 * Input: a = "11", b = "1"
 * Output: "100"
 * 
 * Example 2:
 * 
 * 
 * Input: a = "1010", b = "1011"
 * Output: "10101"
 * 
 */
class Solution {
public:
    string addBinary(string a, string b) {
        string sum_res;
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0 || carry)
        {
            int a_digit = 0, b_digit = 0;
            int bit_sum = 0;
            if(i >= 0)
                a_digit = (a[i--] == '1');
            if(j >= 0)
                b_digit = (b[j--] == '1');
            bit_sum = a_digit + b_digit + carry;
            if(bit_sum == 0 || bit_sum == 1)
            {
                sum_res = static_cast<char>(bit_sum + '0') + sum_res;
                carry = 0;
            }
            else if(bit_sum == 2)
            {
                sum_res = '0' + sum_res;
                carry = 1;
            }
            else if(bit_sum == 3)
            {
                sum_res = '1' + sum_res;
                carry = 1;
            }
        }
        return sum_res;
    }
};
