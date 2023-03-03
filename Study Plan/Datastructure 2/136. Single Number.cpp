// problem link : https://leetcode.com/problems/single-number/?envType=study-plan&id=data-structure-ii

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        
        for(auto x : nums)
        sum^=x;

        return sum;
        
    }
};