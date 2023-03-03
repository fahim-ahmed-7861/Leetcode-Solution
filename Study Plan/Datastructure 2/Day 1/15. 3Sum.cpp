//https://leetcode.com/problems/3sum/description/?envType=study-plan&id=data-structure-ii
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        int i, n = nums.size(),sum;

        for(i=0; i<n; i++)
        {
          int low=i+1,high =n-1;

          while(low<high)
          {
              sum = nums[low]+nums[high]+nums[i];

              if(sum>0)
              high--;

              else if(sum<0)low++;

              else{

                  ans.push_back({nums[i],nums[low],nums[high]});
                  low++;
                  high--;
                  while(low<=high and nums[low]==nums[low-1])low++;
                  while(low<=high and nums[high]==nums[high+1])high--;

                

              }
          }
          while(i+1<n and nums[i]==nums[i+1])i++;
        }

        return ans;

        
        
    }
};