//Solution for LeetCode problem - Concatenation of Array
class Solution {
    public int[] getConcatenation(int[] nums) {
        int s[] = new int[2*nums.length];
        for(int i=0;i<nums.length;i++)
        {
            s[i] = nums[i];
            s[i+nums.length] = nums[i];
        }
        return s;
    }
}
