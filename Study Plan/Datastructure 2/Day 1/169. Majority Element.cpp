//https://leetcode.com/problems/majority-element/?envType=study-plan&id=data-structure-ii

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count = 0,majority = -1;

        for(auto x : nums)
        {
            if(!count)majority = x;
            count+= x==majority ? 1 : -1;
        }

        return majority;
        
    }
};